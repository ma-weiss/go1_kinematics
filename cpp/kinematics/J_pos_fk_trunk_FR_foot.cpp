/*
 * Automatically Generated from CasADI.
 * 2023-08-17 12:25:55
 */
#include "J_pos_fk_trunk_FR_foot.h"
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
 * Sub functions J_pos_fk_trunk_FR_foot:(i0[18])->(o0[3x18,9nz])
 */
static void output1(Eigen::Matrix<double,3, 18> &p_output0, const Eigen::Matrix<double,18, 1> &var0) { 

  double a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a4, a5, a6, a7, a8, a9;
  a0=-4.2599999999999999e-01;
  a1=var0(6) ;
  a2=2.;
  a3=(a1/a2);
  a4=sin(a3);
  a5=var0(7) ;
  a6=(a5/a2);
  a7=cos(a6);
  a8=(a4*a7);
  a5=(a5/a2);
  a9=sin(a5);
  a10=5.0000000000000000e-01;
  a3=cos(a3);
  a3=(a10*a3);
  a11=(a9*a3);
  a12=(a8*a11);
  a13=(a4*a9);
  a14=(a7*a3);
  a15=(a13*a14);
  a12=(a12+a15);
  a1=(a1/a2);
  a15=cos(a1);
  a16=(a15*a9);
  a1=sin(a1);
  a1=(a10*a1);
  a17=(a7*a1);
  a18=(a16*a17);
  a7=(a15*a7);
  a9=(a9*a1);
  a19=(a7*a9);
  a18=(a18+a19);
  a12=(a12-a18);
  a12=(a0*a12);
  a18=var0(8) ;
  a19=(a18/a2);
  a20=sin(a19);
  a21=(a7*a20);
  a18=(a18/a2);
  a22=cos(a18);
  a23=(a16*a22);
  a21=(a21+a23);
  a23=(a20*a9);
  a24=(a22*a17);
  a23=(a23-a24);
  a24=(a21*a23);
  a25=(a7*a22);
  a26=(a16*a20);
  a25=(a25-a26);
  a26=(a20*a17);
  a27=(a22*a9);
  a26=(a26+a27);
  a27=(a25*a26);
  a24=(a24-a27);
  a27=(a8*a22);
  a28=(a13*a20);
  a27=(a27-a28);
  a28=(a20*a14);
  a29=(a22*a11);
  a28=(a28+a29);
  a29=(a27*a28);
  a30=(a8*a20);
  a31=(a13*a22);
  a30=(a30+a31);
  a31=(a22*a14);
  a32=(a20*a11);
  a31=(a31-a32);
  a32=(a30*a31);
  a29=(a29+a32);
  a24=(a24+a29);
  a24=(a0*a24);
  a12=(a12+a24);
  p_output0(0)=a12;
  a11=(a16*a11);
  a12=(a13*a9);
  a11=(a11-a12);
  a12=(a7*a14);
  a17=(a8*a17);
  a12=(a12-a17);
  a11=(a11-a12);
  a11=(a0*a11);
  a12=-8.0000000000000002e-02;
  a17=(a4+a4);
  a17=(a17*a3);
  a17=(a2*a17);
  a12=(a12*a17);
  a11=(a11-a12);
  a28=(a21*a28);
  a12=(a30*a26);
  a28=(a28-a12);
  a23=(a27*a23);
  a12=(a25*a31);
  a23=(a23+a12);
  a28=(a28-a23);
  a28=(a0*a28);
  a11=(a11+a28);
  p_output0(1)=a11;
  a11=-1.6000000000000000e-01;
  a3=(a15*a3);
  a1=(a4*a1);
  a3=(a3-a1);
  a11=(a11*a3);
  a3=-2.1299999999999999e-01;
  a1=(a16+a16);
  a9=(a1*a9);
  a9=(a2*a9);
  a28=(a8+a8);
  a14=(a28*a14);
  a14=(a2*a14);
  a9=(a9-a14);
  a9=(a3*a9);
  a11=(a11+a9);
  a9=(a21+a21);
  a26=(a9*a26);
  a26=(a2*a26);
  a14=(a27+a27);
  a31=(a14*a31);
  a31=(a2*a31);
  a26=(a26-a31);
  a26=(a3*a26);
  a11=(a11+a26);
  p_output0(2)=a11;
  a5=cos(a5);
  a5=(a10*a5);
  a11=(a15*a5);
  a26=(a7*a11);
  a6=sin(a6);
  a6=(a10*a6);
  a15=(a15*a6);
  a31=(a16*a15);
  a26=(a26-a31);
  a5=(a4*a5);
  a31=(a8*a5);
  a4=(a4*a6);
  a6=(a13*a4);
  a31=(a31-a6);
  a26=(a26+a31);
  a26=(a0*a26);
  a31=(a22*a11);
  a6=(a20*a15);
  a31=(a31-a6);
  a6=(a25*a31);
  a23=(a22*a15);
  a12=(a20*a11);
  a23=(a23+a12);
  a12=(a21*a23);
  a6=(a6-a12);
  a12=(a22*a5);
  a17=(a20*a4);
  a12=(a12-a17);
  a17=(a27*a12);
  a22=(a22*a4);
  a20=(a20*a5);
  a22=(a22+a20);
  a20=(a30*a22);
  a17=(a17-a20);
  a6=(a6+a17);
  a6=(a0*a6);
  a26=(a26+a6);
  p_output0(3)=a26;
  a5=(a16*a5);
  a26=(a13*a11);
  a5=(a5+a26);
  a15=(a8*a15);
  a26=(a7*a4);
  a15=(a15+a26);
  a5=(a5+a15);
  a5=(a0*a5);
  a12=(a21*a12);
  a15=(a30*a31);
  a12=(a12+a15);
  a23=(a27*a23);
  a15=(a25*a22);
  a23=(a23+a15);
  a12=(a12+a23);
  a12=(a0*a12);
  a5=(a5+a12);
  p_output0(4)=a5;
  a28=(a28*a4);
  a28=(a2*a28);
  a1=(a1*a11);
  a1=(a2*a1);
  a28=(a28-a1);
  a28=(a3*a28);
  a22=(a14*a22);
  a22=(a2*a22);
  a31=(a9*a31);
  a31=(a2*a31);
  a22=(a22-a31);
  a22=(a3*a22);
  a28=(a28+a22);
  p_output0(5)=a28;
  a19=cos(a19);
  a19=(a10*a19);
  a28=(a7*a19);
  a18=sin(a18);
  a10=(a10*a18);
  a18=(a16*a10);
  a28=(a28-a18);
  a18=(a25*a28);
  a7=(a7*a10);
  a16=(a16*a19);
  a7=(a7+a16);
  a16=(a21*a7);
  a18=(a18-a16);
  a16=(a8*a19);
  a22=(a13*a10);
  a16=(a16-a22);
  a22=(a27*a16);
  a8=(a8*a10);
  a13=(a13*a19);
  a8=(a8+a13);
  a13=(a30*a8);
  a22=(a22-a13);
  a18=(a18+a22);
  a18=(a0*a18);
  p_output0(6)=a18;
  a21=(a21*a16);
  a30=(a30*a28);
  a21=(a21+a30);
  a27=(a27*a7);
  a25=(a25*a8);
  a27=(a27+a25);
  a21=(a21+a27);
  a0=(a0*a21);
  p_output0(7)=a0;
  a14=(a14*a8);
  a14=(a2*a14);
  a9=(a9*a28);
  a2=(a2*a9);
  a14=(a14-a2);
  a3=(a3*a14);
  p_output0(8)=a3;
  
}

void J_pos_fk_trunk_FR_foot (Eigen::Matrix<double,3, 18> &p_output0, const Eigen::Matrix<double,18, 1> &var0) {
   /* Call Subroutines */
   output1(p_output0, var0);
}
