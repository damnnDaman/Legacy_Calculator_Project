#ifndef UNITY_H
#define UNITY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Data structure to hold test information
typedef struct {
    const char *CurrentTestName;
    int CurrentTestLineNumber;
    int NumberOfTests;
    int TestFailures;
    int TestPasses;
} UnityFramework;

extern UnityFramework Unity; // Declare Unity as a global variable

// Unity Core Functions
void UnityBegin(const char *testFile);
int UnityEnd(void);
void UnityConcludeTest(void);

// Assertion Macros
#define TEST_ASSERT_EQUAL(expected, actual) \
    UnityAssertEqualNumber((int)(expected), (int)(actual), __LINE__, #expected, #actual)

#define TEST_ASSERT_FLOAT_WITHIN(delta, expected, actual) \
    UnityAssertFloatWithin(delta, (float)(expected), (float)(actual), __LINE__, #expected, #actual)

#define TEST_ASSERT_FALSE(expression) \
    UnityAssertEqualNumber(0, (int)(expression), __LINE__, #expression, "FALSE")

// Assertion Implementations
void UnityAssertEqualNumber(int expected, int actual, int line, const char *expectedStr, const char *actualStr);
void UnityAssertFloatWithin(float delta, float expected, float actual, int line, const char *expectedStr, const char *actualStr);

#endif // UNITY_H
