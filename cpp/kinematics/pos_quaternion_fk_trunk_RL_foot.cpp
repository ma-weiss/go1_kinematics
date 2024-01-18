/*
 * Automatically Generated from CasADI.
 * 2024-01-18 11:35:57
 */
#include "pos_quaternion_fk_trunk_RL_foot.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef _MSC_VER
#define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
#define INLINE static inline /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
// INLINE double Power(double x, double y) { return pow(x, y); }
// INLINE double Sqrt(double x) { return sqrt(x); }
INLINE double casadi_sq(double x) { return pow(x, 2); }

// INLINE double Abs(double x) { return fabs(x); }

// INLINE double Exp(double x) { return exp(x); }
// INLINE double Log(double x) { return log(x); }

// INLINE double Sin(double x) { return sin(x); }
// INLINE double Cos(double x) { return cos(x); }
// INLINE double Tan(double x) { return tan(x); }

// INLINE double Csc(double x) { return 1.0 / sin(x); }
// INLINE double Sec(double x) { return 1.0 / cos(x); }

// INLINE double ArcSin(double x) { return asin(x); }
// INLINE double ArcCos(double x) { return acos(x); }

// /* update ArcTan function to use atan2 instead. */
// INLINE double ArcTan(double x, double y) { return atan2(y, x); }

// INLINE double Sinh(double x) { return sinh(x); }
// INLINE double Cosh(double x) { return cosh(x); }
// INLINE double Tanh(double x) { return tanh(x); }

// #define E 2.71828182845904523536029
// #define Pi 3.14159265358979323846264
// #define Degree 0.01745329251994329576924

/*
 * Sub functions pos_quaternion_fk_trunk_RL_foot:(i0[18])->(o0[7])
 */
static void output1(Eigen::Matrix<double,7, 1> &p_output0, const Eigen::Matrix<double,18, 1> &var0) { 

  double a0, a1, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=-1.8809999999999999e-01;
  a1=-4.2599999999999999e-01;
  a2=var0(15) ;
  a3=2.;
  a4=(a2/a3);
  a4=cos(a4);
  a5=var0(16) ;
  a6=(a5/a3);
  a6=cos(a6);
  a7=(a4*a6);
  a5=(a5/a3);
  a5=sin(a5);
  a8=(a4*a5);
  a9=(a7*a8);
  a2=(a2/a3);
  a2=sin(a2);
  a5=(a2*a5);
  a6=(a2*a6);
  a10=(a5*a6);
  a9=(a9+a10);
  a9=(a1*a9);
  a0=(a0+a9);
  a9=var0(17) ;
  a10=(a9/a3);
  a10=cos(a10);
  a11=(a7*a10);
  a9=(a9/a3);
  a9=sin(a9);
  a12=(a8*a9);
  a11=(a11-a12);
  a12=(a7*a9);
  a13=(a8*a10);
  a12=(a12+a13);
  a13=(a11*a12);
  a14=(a6*a9);
  a15=(a5*a10);
  a14=(a14+a15);
  a10=(a6*a10);
  a9=(a5*a9);
  a10=(a10-a9);
  a9=(a14*a10);
  a13=(a13+a9);
  a13=(a1*a13);
  a0=(a0+a13);
  p_output0(0)=a0;
  a0=4.6750000000000000e-02;
  a13=8.0000000000000002e-02;
  a9=1.;
  a15=casadi_sq(a2);
  a15=(a3*a15);
  a15=(a9-a15);
  a13=(a13*a15);
  a0=(a0+a13);
  a5=(a5*a8);
  a7=(a7*a6);
  a5=(a5-a7);
  a5=(a1*a5);
  a0=(a0+a5);
  a5=(a14*a12);
  a7=(a11*a10);
  a5=(a5-a7);
  a1=(a1*a5);
  a0=(a0+a1);
  p_output0(1)=a0;
  a0=1.6000000000000000e-01;
  a4=(a4*a2);
  a0=(a0*a4);
  a4=-2.1299999999999999e-01;
  a6=casadi_sq(a6);
  a6=(a3*a6);
  a6=(a9-a6);
  a8=casadi_sq(a8);
  a8=(a3*a8);
  a6=(a6-a8);
  a6=(a4*a6);
  a0=(a0+a6);
  a6=casadi_sq(a10);
  a6=(a3*a6);
  a9=(a9-a6);
  a6=casadi_sq(a12);
  a3=(a3*a6);
  a9=(a9-a3);
  a4=(a4*a9);
  a0=(a0+a4);
  p_output0(2)=a0;
  p_output0(3)=a11;
  p_output0(4)=a10;
  p_output0(5)=a12;
  p_output0(6)=a14;
  
}

void pos_quaternion_fk_trunk_RL_foot (Eigen::Matrix<double,7, 1> &p_output0, const Eigen::Matrix<double,18, 1> &var0) {
   /* Call Subroutines */
   output1(p_output0, var0);
}
