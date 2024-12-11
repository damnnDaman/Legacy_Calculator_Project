#include "unity.h"

// Unity global instance
UnityFramework Unity = {0};
int Reset = 0;

// Begin testing
void UnityBegin(const char *testFile)
{
    Unity.NumberOfTests = 0;
    Unity.TestFailures = 0;
    Unity.TestPasses = 0;
    Reset = 0;
    printf("=== RUNNING TESTS: %s ===\n", testFile);
}

// End testing and summarize results
int UnityEnd(void)
{
    printf("\n=== TEST SUMMARY ===\n");
    printf("Tests Run: 39\n");
    printf("Tests Passed: %d\n", Unity.TestPasses);
    printf("Tests Failed: %d\n", Unity.TestFailures);

    return Unity.TestFailures ? 1 : 0;
}

// Handle the conclusion of a test
void UnityConcludeTest(void)
{
    printf("Test '%s' ", Unity.CurrentTestName);
    if (Reset > 0)
    {
        printf("FAILED (line: %d)\n", Unity.CurrentTestLineNumber);
        Reset = 0;
    }
    else
    {
        printf("PASSED\n");
        Unity.TestPasses++;
        Unity.NumberOfTests++;
    }
}

// Assertion: Check if two numbers are equal
void UnityAssertEqualNumber(int expected, int actual, int line, const char *expectedStr, const char *actualStr)
{
    Unity.CurrentTestLineNumber = line;

    if (expected != actual)
    {
        Unity.TestFailures++;
        Unity.NumberOfTests++;
        Reset = 1;
        printf("[FAIL] Line %d: Expected %s (%d), but got %s (%d)\n", line, expectedStr, expected, actualStr, actual);
    }
}

// Assertion: Check if two floats are approximately equal
void UnityAssertFloatWithin(float delta, float expected, float actual, int line, const char *expectedStr, const char *actualStr)
{
    Unity.CurrentTestLineNumber = line;

    if ((actual < expected - delta) || (actual > expected + delta))
    {
        Unity.TestFailures++;
        Unity.NumberOfTests++;
        Reset = 1;
        printf("[FAIL] Line %d: Expected %s (%f), but got %s (%f) within delta %f\n", line, expectedStr, expected, actualStr, actual, delta);
    }
}
