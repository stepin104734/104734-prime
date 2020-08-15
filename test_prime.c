#include "unity.h"
#include "factorial.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_prime(void)
{
  TEST_ASSERT_EQUAL(-1, prime(6));
  TEST_ASSERT_EQUAL(1, prime(3));
}
void test_one(void)
{
  TEST_ASSERT_EQUAL(0, prime(1));
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(-1, prime(-1));
  TEST_ASSERT_EQUAL(-1, prime(-10));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_prime);
  RUN_TEST(test_one);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
