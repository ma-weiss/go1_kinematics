/*
 * Automatically Generated from CasADI.
 * 2023-08-17 12:25:55
 */
#include "pos_fk_origin_RR_foot.h"
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
 * Sub functions pos_fk_origin_RR_foot:(i0[18])->(o0[3])
 */
static void output1(Eigen::Matrix<double,3, 1> &p_output0, const Eigen::Matrix<double,18, 1> &var0) { 

  double a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a3, a4, a5, a6, a7, a8, a9;
  a0=var0(0) ;
  a1=-1.8809999999999999e-01;
  a2=1.;
  a3=2.;
  a4=var0(3) ;
  a5=(a4/a3);
  a5=cos(a5);
  a6=var0(4) ;
  a7=(a6/a3);
  a7=sin(a7);
  a8=(a5*a7);
  a9=var0(5) ;
  a10=(a9/a3);
  a10=cos(a10);
  a11=(a8*a10);
  a4=(a4/a3);
  a4=sin(a4);
  a6=(a6/a3);
  a6=cos(a6);
  a12=(a4*a6);
  a9=(a9/a3);
  a9=sin(a9);
  a13=(a12*a9);
  a11=(a11+a13);
  a13=casadi_sq(a11);
  a13=(a3*a13);
  a13=(a2-a13);
  a12=(a12*a10);
  a8=(a8*a9);
  a12=(a12-a8);
  a8=casadi_sq(a12);
  a8=(a3*a8);
  a13=(a13-a8);
  a1=(a1*a13);
  a13=-9.3500000000000000e-02;
  a5=(a5*a6);
  a6=(a5*a9);
  a4=(a4*a7);
  a7=(a4*a10);
  a6=(a6-a7);
  a7=(a11*a6);
  a5=(a5*a10);
  a4=(a4*a9);
  a5=(a5+a4);
  a4=(a5*a12);
  a7=(a7-a4);
  a7=(a13*a7);
  a1=(a1+a7);
  a0=(a0+a1);
  a1=-1.6000000000000000e-01;
  a7=var0(12) ;
  a4=(a7/a3);
  a4=cos(a4);
  a9=(a11*a4);
  a7=(a7/a3);
  a7=sin(a7);
  a10=(a12*a7);
  a9=(a9+a10);
  a10=(a5*a7);
  a8=(a6*a4);
  a10=(a10+a8);
  a8=(a9*a10);
  a14=(a5*a4);
  a15=(a6*a7);
  a14=(a14-a15);
  a4=(a12*a4);
  a7=(a11*a7);
  a4=(a4-a7);
  a7=(a14*a4);
  a8=(a8-a7);
  a8=(a1*a8);
  a0=(a0+a8);
  a8=-4.2599999999999999e-01;
  a7=var0(13) ;
  a15=(a7/a3);
  a15=cos(a15);
  a16=(a14*a15);
  a7=(a7/a3);
  a7=sin(a7);
  a17=(a9*a7);
  a16=(a16-a17);
  a17=(a14*a7);
  a18=(a9*a15);
  a17=(a17+a18);
  a18=(a16*a17);
  a19=(a10*a7);
  a20=(a4*a15);
  a19=(a19+a20);
  a15=(a10*a15);
  a7=(a4*a7);
  a15=(a15-a7);
  a7=(a19*a15);
  a18=(a18+a7);
  a18=(a8*a18);
  a0=(a0+a18);
  a18=var0(14) ;
  a7=(a18/a3);
  a7=cos(a7);
  a20=(a16*a7);
  a18=(a18/a3);
  a18=sin(a18);
  a21=(a17*a18);
  a20=(a20-a21);
  a21=(a16*a18);
  a22=(a17*a7);
  a21=(a21+a22);
  a22=(a20*a21);
  a23=(a15*a18);
  a24=(a19*a7);
  a23=(a23+a24);
  a7=(a15*a7);
  a18=(a19*a18);
  a7=(a7-a18);
  a18=(a23*a7);
  a22=(a22+a18);
  a22=(a8*a22);
  a0=(a0+a22);
  p_output0(0)=a0;
  a0=var0(1) ;
  a22=-3.7619999999999998e-01;
  a18=(a5*a12);
  a24=(a11*a6);
  a18=(a18+a24);
  a18=(a22*a18);
  a24=-4.6750000000000000e-02;
  a25=casadi_sq(a6);
  a25=(a3*a25);
  a25=(a2-a25);
  a26=casadi_sq(a12);
  a26=(a3*a26);
  a25=(a25-a26);
  a24=(a24*a25);
  a18=(a18+a24);
  a0=(a0+a18);
  a18=-8.0000000000000002e-02;
  a24=casadi_sq(a10);
  a24=(a3*a24);
  a24=(a2-a24);
  a25=casadi_sq(a4);
  a25=(a3*a25);
  a24=(a24-a25);
  a18=(a18*a24);
  a0=(a0+a18);
  a19=(a19*a17);
  a16=(a16*a15);
  a19=(a19-a16);
  a19=(a8*a19);
  a0=(a0+a19);
  a23=(a23*a21);
  a20=(a20*a7);
  a23=(a23-a20);
  a8=(a8*a23);
  a0=(a0+a8);
  p_output0(1)=a0;
  a0=var0(2) ;
  a8=(a12*a6);
  a23=(a5*a11);
  a8=(a8-a23);
  a22=(a22*a8);
  a5=(a5*a6);
  a12=(a12*a11);
  a5=(a5+a12);
  a13=(a13*a5);
  a22=(a22+a13);
  a0=(a0+a22);
  a14=(a14*a10);
  a4=(a4*a9);
  a14=(a14+a4);
  a1=(a1*a14);
  a0=(a0+a1);
  a1=-2.1299999999999999e-01;
  a15=casadi_sq(a15);
  a15=(a3*a15);
  a15=(a2-a15);
  a17=casadi_sq(a17);
  a17=(a3*a17);
  a15=(a15-a17);
  a15=(a1*a15);
  a0=(a0+a15);
  a7=casadi_sq(a7);
  a7=(a3*a7);
  a2=(a2-a7);
  a21=casadi_sq(a21);
  a3=(a3*a21);
  a2=(a2-a3);
  a1=(a1*a2);
  a0=(a0+a1);
  p_output0(2)=a0;
  
}

void pos_fk_origin_RR_foot (Eigen::Matrix<double,3, 1> &p_output0, const Eigen::Matrix<double,18, 1> &var0) {
   /* Call Subroutines */
   output1(p_output0, var0);
}
