#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <check.h>
#include "from_roman.h"


START_TEST (should_return_1_when_given_I)
{
  ck_assert_int_eq(1, roman_numeral_to_integer("I"));
}
END_TEST


START_TEST (should_return_2_when_given_II)
{
  ck_assert_int_eq(2, roman_numeral_to_integer("II"));
}
END_TEST


START_TEST (should_return_3_when_given_III)
{
  ck_assert_int_eq(3, roman_numeral_to_integer("III"));
}
END_TEST


START_TEST (should_return_5_when_given_V)
{
  ck_assert_int_eq(5, roman_numeral_to_integer("V"));
}
END_TEST


START_TEST (should_return_10_when_given_X)
{
  ck_assert_int_eq(10, roman_numeral_to_integer("X"));
}
END_TEST


START_TEST (should_return_50_when_given_L)
{
  ck_assert_int_eq(50, roman_numeral_to_integer("L"));
}
END_TEST


START_TEST (should_return_100_when_given_C)
{
  ck_assert_int_eq(100, roman_numeral_to_integer("C"));
}
END_TEST


START_TEST (should_return_500_when_given_D)
{
  ck_assert_int_eq(500, roman_numeral_to_integer("D"));
}
END_TEST


START_TEST (should_return_1000_when_given_M)
{
  ck_assert_int_eq(1000, roman_numeral_to_integer("M"));
}
END_TEST


START_TEST (should_return_4_when_given_IV)
{
  ck_assert_int_eq(4, roman_numeral_to_integer("IV"));
}
END_TEST


Suite* check_from_roman_suite(void)
{
  Suite* suite = suite_create("Convert Roman Numerals to Integers");
  TCase* core = tcase_create("Core");
  tcase_add_test(core, should_return_1_when_given_I);
  tcase_add_test(core, should_return_2_when_given_II);
  tcase_add_test(core, should_return_3_when_given_III);
  tcase_add_test(core, should_return_5_when_given_V);
  tcase_add_test(core, should_return_10_when_given_X);
  tcase_add_test(core, should_return_50_when_given_L);
  tcase_add_test(core, should_return_100_when_given_C);
  tcase_add_test(core, should_return_500_when_given_D);
  tcase_add_test(core, should_return_1000_when_given_M);
  tcase_add_test(core, should_return_4_when_given_IV);
  suite_add_tcase(suite, core);  
  return suite;
}