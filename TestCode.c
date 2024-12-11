#include "unity.h"
#include <string.h>
#include <stdio.h>
#include "codeUnderTest.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_HC001(void)
{
    TEST_ASSERT_EQUAL(0, fib(1));
}

void test_HC002(void)
{
    TEST_ASSERT_EQUAL(1, fib(2));
}

void test_HC004(void)
{
    TEST_ASSERT_EQUAL(1, power(0, 0));
}

void test_HC005(void)
{
    TEST_ASSERT_EQUAL(1, power(2, 0));
}

void test_HC006(void)
{
    TEST_ASSERT_EQUAL(0, power(0, 1));
}

void test_HC007(void)
{
    TEST_ASSERT_EQUAL(39.0625, power(2.5, 4));
}

void test_TC003(void)
{
    TEST_ASSERT_EQUAL(0, fib(1));
}

void test_TC004(void)
{
    TEST_ASSERT_EQUAL(1836311903, fib(47));
}

void test_TC006(void)
{
    TEST_ASSERT_EQUAL(1, power(2, 0));
}

void test_TC007(void)
{
    TEST_ASSERT_EQUAL(2, power(2, 1));
}

void test_TC008(void)
{
    TEST_ASSERT_EQUAL(0.5, power(2, -1));
}

void test_TC009(void)
{
    TEST_ASSERT_FALSE(power(2, 127));
}

void test_TC010(void)
{
    TEST_ASSERT_FALSE(power(2, 128));
}

void test_DF001(void)
{
    TEST_ASSERT_EQUAL(0, fib(1));
}

void test_DF002(void)
{
    TEST_ASSERT_EQUAL(1, fib(2));
}

void test_DF003(void)
{
    TEST_ASSERT_EQUAL(3, fib(5));
}

void test_DF004(void)
{
    TEST_ASSERT_EQUAL(39.0625, power(2.5, 4));
}

void test_DF005(void)
{
    TEST_ASSERT_EQUAL(1, power(5, 0));
}

void test_DF006(void)
{
    TEST_ASSERT_EQUAL(6025721.316, power(5, 9.7));
}

void test_DF007(void)
{
    TEST_ASSERT_EQUAL(0, power(0, 7));
}

void test_DF008(void)
{
    TEST_ASSERT_EQUAL(0.0002035416243, power(17, -3));
}

void test_DF009(void)
{
    TEST_ASSERT_EQUAL(-7776, power(-6, -5));\
}

void test_DF010(void)
{
    TEST_ASSERT_EQUAL(2015.1121, power(-6.7, 4));
}

void test_DF011(void)
{
    TEST_ASSERT_EQUAL(0.0000863167, power(8, -4.5));
}

void test_DF012(void)
{
    TEST_ASSERT_EQUAL(0.000244140625, power(-8, -4));
}

void test_DF013(void)
{
    TEST_ASSERT_FALSE(power(-9.8, -2.5));
}

void test_HJ001(void)
{
    TEST_ASSERT_EQUAL(0, calculateFact(21));
}

void test_HJ002(void)
{
    TEST_ASSERT_EQUAL(0, calculateFact(-1));
}

void test_HJ003(void)
{
    TEST_ASSERT_EQUAL(1, calculateFact(0));
}

void test_HJ004(void)
{
    TEST_ASSERT_EQUAL(24, calculateFact(4));
}

void test_HJ005(void)
{
    TEST_ASSERT_FALSE(calculateFact(2.5));
}

void test_HJ006(void)
{
    TEST_ASSERT_EQUAL(1, calculateFact(1));
}

void test_DC001(void)
{
    TEST_ASSERT_EQUAL(120, calculateFact(5));
}

void test_DC002(void)
{
    TEST_ASSERT_EQUAL(1, calculateFact(0));
}

void test_DC003(void)
{
    TEST_ASSERT_EQUAL(0, calculateFact(21));
}

void test_DC004(void)
{
    TEST_ASSERT_EQUAL(2432902008176640000, calculateFact(20));
}

void test_DC005(void)
{
    TEST_ASSERT_EQUAL(0, calculateFact(-1));
}

void test_DC006(void)
{
    TEST_ASSERT_EQUAL(0, calculateFact(-100));
}

void test_DC007(void)
{
    TEST_ASSERT_EQUAL(3628800, calculateFact(10.5));
}