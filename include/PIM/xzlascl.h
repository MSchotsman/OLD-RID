/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzlascl.h
 *
 * Code generation for function 'xzlascl'
 *
 */

#ifndef XZLASCL_H
#define XZLASCL_H

/* Include files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_xzlascl(double cfrom, double cto, int m, creal_T A[3], int iA0);

void c_xzlascl(double cfrom, double cto, int m, double A[3], int iA0);

void d_xzlascl(double cfrom, double cto, int m, double A[2], int iA0);

void xzlascl(double cfrom, double cto, creal_T A[9]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (xzlascl.h) */
