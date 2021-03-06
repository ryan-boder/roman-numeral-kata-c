#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <check.h>
#include "to_roman.h"
#include "test_utility.h"


START_TEST (should_return_NULL_when_given_0)
{
  ck_assert(NULL == integer_to_roman_numeral(0));
}
END_TEST


START_TEST (should_return_NULL_when_given_negative)
{
  ck_assert(NULL == integer_to_roman_numeral(-1));
  ck_assert(NULL == integer_to_roman_numeral(-8));
  ck_assert(NULL == integer_to_roman_numeral(-10));
}
END_TEST


START_TEST (should_return_I_when_given_1)
{
  mem_free_assert_str_eq("I", integer_to_roman_numeral(1));
}
END_TEST


START_TEST (should_return_II_when_given_2)
{
  mem_free_assert_str_eq("II", integer_to_roman_numeral(2));
}
END_TEST


START_TEST (should_return_III_when_given_3)
{
  mem_free_assert_str_eq("III", integer_to_roman_numeral(3));
}
END_TEST


START_TEST (should_return_IV_when_given_4)
{
  mem_free_assert_str_eq("IV", integer_to_roman_numeral(4));
}
END_TEST


START_TEST (should_return_V_when_given_5)
{
  mem_free_assert_str_eq("V", integer_to_roman_numeral(5));
}
END_TEST


START_TEST (should_return_VI_when_given_6)
{
  mem_free_assert_str_eq("VI", integer_to_roman_numeral(6));
}
END_TEST


START_TEST (should_return_VII_when_given_7)
{
  mem_free_assert_str_eq("VII", integer_to_roman_numeral(7));
}
END_TEST


START_TEST (should_return_IX_when_given_9)
{
  mem_free_assert_str_eq("IX", integer_to_roman_numeral(9));
}
END_TEST


START_TEST (should_return_X_when_given_10)
{
  mem_free_assert_str_eq("X", integer_to_roman_numeral(10));
}
END_TEST


START_TEST (should_return_XIV_when_given_14)
{
  mem_free_assert_str_eq("XIV", integer_to_roman_numeral(14));
}
END_TEST


START_TEST (should_return_XIX_when_given_19)
{
  mem_free_assert_str_eq("XIX", integer_to_roman_numeral(19));
}
END_TEST


START_TEST (should_return_XL_when_given_40)
{
  mem_free_assert_str_eq("XL", integer_to_roman_numeral(40));
}
END_TEST


START_TEST (should_return_XLI_when_given_41)
{
  mem_free_assert_str_eq("XLI", integer_to_roman_numeral(41));
}
END_TEST


START_TEST (should_return_L_when_given_50)
{
  mem_free_assert_str_eq("L", integer_to_roman_numeral(50));
}
END_TEST


START_TEST (should_return_XC_when_given_90)
{
  mem_free_assert_str_eq("XC", integer_to_roman_numeral(90));
}
END_TEST


START_TEST (should_return_C_when_given_100)
{
  mem_free_assert_str_eq("C", integer_to_roman_numeral(100));
}
END_TEST


START_TEST (should_return_CD_when_given_400)
{
  mem_free_assert_str_eq("CD", integer_to_roman_numeral(400));
}
END_TEST


START_TEST (should_return_D_when_given_500)
{
  mem_free_assert_str_eq("D", integer_to_roman_numeral(500));
}
END_TEST


START_TEST (should_return_CM_when_given_900)
{
  mem_free_assert_str_eq("CM", integer_to_roman_numeral(900));
}
END_TEST


START_TEST (should_return_M_when_given_1000)
{
  mem_free_assert_str_eq("M", integer_to_roman_numeral(1000));
}
END_TEST


START_TEST (should_return_MMMCMXCIX_when_given_3999)
{
  mem_free_assert_str_eq("MMMCMXCIX", integer_to_roman_numeral(3999));
}
END_TEST


START_TEST (should_return_NULL_when_greater_than_3999)
{
  ck_assert(NULL == integer_to_roman_numeral(4000));
  ck_assert(NULL == integer_to_roman_numeral(4001));
  ck_assert(NULL == integer_to_roman_numeral(5000));
}
END_TEST


Suite* check_to_roman_suite(void)
{
  Suite* suite = suite_create("Convert Integers to Roman Numerals");
  TCase* core = tcase_create("Core");
  tcase_add_test(core, should_return_NULL_when_given_0);
  tcase_add_test(core, should_return_NULL_when_given_negative);
  tcase_add_test(core, should_return_I_when_given_1);
  tcase_add_test(core, should_return_II_when_given_2);
  tcase_add_test(core, should_return_III_when_given_3);
  tcase_add_test(core, should_return_IV_when_given_4);
  tcase_add_test(core, should_return_V_when_given_5);
  tcase_add_test(core, should_return_VI_when_given_6);
  tcase_add_test(core, should_return_VII_when_given_7);
  tcase_add_test(core, should_return_IX_when_given_9);
  tcase_add_test(core, should_return_X_when_given_10);
  tcase_add_test(core, should_return_XIV_when_given_14);
  tcase_add_test(core, should_return_XIX_when_given_19);
  tcase_add_test(core, should_return_XL_when_given_40);
  tcase_add_test(core, should_return_XLI_when_given_41);
  tcase_add_test(core, should_return_L_when_given_50);
  tcase_add_test(core, should_return_XC_when_given_90);
  tcase_add_test(core, should_return_C_when_given_100);
  tcase_add_test(core, should_return_CD_when_given_400);
  tcase_add_test(core, should_return_D_when_given_500);
  tcase_add_test(core, should_return_CM_when_given_900);
  tcase_add_test(core, should_return_M_when_given_1000);
  tcase_add_test(core, should_return_MMMCMXCIX_when_given_3999);
  tcase_add_test(core, should_return_NULL_when_greater_than_3999);
  suite_add_tcase(suite, core);
  return suite;
}
