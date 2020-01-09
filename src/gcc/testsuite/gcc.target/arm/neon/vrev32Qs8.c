/* Test the `vrev32Qs8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vrev32Qs8 (void)
{
  int8x16_t out_int8x16_t;
  int8x16_t arg0_int8x16_t;

  out_int8x16_t = vrev32q_s8 (arg0_int8x16_t);
}

/* { dg-final { scan-assembler "vrev32\.8\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
