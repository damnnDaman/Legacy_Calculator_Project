/*=======Test Runner Used To Run Each Test Below=====*/

#define TEST_PROTECT() (1) // Simplified for now, always returns true

#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <string.h>
#include <stdio.h>
#include "math.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_HC001(void);
extern void test_HC002(void);
extern void test_HC004(void);
extern void test_HC005(void);
extern void test_HC006(void);
extern void test_HC007(void);
extern void test_TC003(void);
extern void test_TC004(void);
extern void test_TC006(void);
extern void test_TC007(void);
extern void test_TC008(void);
extern void test_TC009(void);
extern void test_TC010(void);
extern void test_DF001(void);
extern void test_DF002(void);
extern void test_DF003(void);
extern void test_DF004(void);
extern void test_DF005(void);
extern void test_DF006(void);
extern void test_DF007(void);
extern void test_DF008(void);
extern void test_DF009(void);
extern void test_DF010(void);
extern void test_DF011(void);
extern void test_DF012(void);
extern void test_DF013(void);
extern void test_HJ001(void);
extern void test_HJ002(void);
extern void test_HJ003(void);
extern void test_HJ004(void);
extern void test_HJ005(void);
extern void test_HJ006(void);
extern void test_DC001(void);
extern void test_DC002(void);
extern void test_DC003(void);
extern void test_DC004(void);
extern void test_DC005(void);
extern void test_DC006(void);
extern void test_DC007(void);





/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
    UnityBegin("TestCode.c");

    printf("\n\nmain: ***** Begin Unit Tests*****\n");

    RUN_TEST(test_HC001, 10);
    RUN_TEST(test_HC002, 15);
    RUN_TEST(test_HC004, 25);
    RUN_TEST(test_HC005, 30);
    RUN_TEST(test_HC006, 35);
    RUN_TEST(test_HC007, 40);
    RUN_TEST(test_TC003, 55);
    RUN_TEST(test_TC004, 60);
    RUN_TEST(test_TC006, 70);
    RUN_TEST(test_TC007, 75);
    RUN_TEST(test_TC008, 80);
    RUN_TEST(test_TC009, 85);
    RUN_TEST(test_TC010, 90);
    RUN_TEST(test_DF001, 95);
    RUN_TEST(test_DF002, 100);
    RUN_TEST(test_DF003, 105);
    RUN_TEST(test_DF004, 110);
    RUN_TEST(test_DF005, 115);
    RUN_TEST(test_DF006, 120);
    RUN_TEST(test_DF007, 125);
    RUN_TEST(test_DF008, 130);
    RUN_TEST(test_DF009, 135);
    RUN_TEST(test_DF010, 140);
    RUN_TEST(test_DF011, 145);
    RUN_TEST(test_DF012, 150);
    RUN_TEST(test_DF013, 155);
    RUN_TEST(test_HJ001, 160);
    RUN_TEST(test_HJ002, 165);
    RUN_TEST(test_HJ003, 170);
    RUN_TEST(test_HJ004, 175);
    RUN_TEST(test_HJ005, 180);
    RUN_TEST(test_HJ006, 185);
    RUN_TEST(test_DC001, 190);
    RUN_TEST(test_DC002, 195);
    RUN_TEST(test_DC003, 200);
    RUN_TEST(test_DC004, 205);
    RUN_TEST(test_DC005, 210);
    RUN_TEST(test_DC006, 215);
    RUN_TEST(test_DC007, 220);



    printf("\nmain: *****End Unit Tests*****\n");

    return (UnityEnd());
}
