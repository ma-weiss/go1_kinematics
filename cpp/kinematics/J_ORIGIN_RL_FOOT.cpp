/*
 * Automatically Generated from CasADI.
 * 2023-08-15 17:41:55
 */
#include "J_ORIGIN_RL_FOOT.h"
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
 * Sub functions J_ORIGIN_RL_FOOT:(i0[18])->(o0[6x18,39nz])
 */
static void output1(Eigen::Matrix<double,6, 18> &p_output0, const Eigen::Matrix<double,18, 1> &var0) { 

  double a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a9;
  a0=1.;
  p_output0(0)=a0;
  p_output0(1)=a0;
  p_output0(2)=a0;
  a1=9.3500000000000000e-02;
  a2=var0(3) ;
  a3=2.;
  a4=(a2/a3);
  a5=cos(a4);
  a6=var0(4) ;
  a7=(a6/a3);
  a8=cos(a7);
  a9=(a5*a8);
  a10=var0(5) ;
  a11=(a10/a3);
  a12=sin(a11);
  a13=(a9*a12);
  a2=(a2/a3);
  a14=sin(a2);
  a6=(a6/a3);
  a15=sin(a6);
  a16=(a14*a15);
  a10=(a10/a3);
  a17=cos(a10);
  a18=(a16*a17);
  a13=(a13-a18);
  a18=5.0000000000000000e-01;
  a2=cos(a2);
  a2=(a18*a2);
  a19=(a8*a2);
  a20=(a12*a19);
  a4=sin(a4);
  a4=(a18*a4);
  a21=(a15*a4);
  a22=(a17*a21);
  a20=(a20-a22);
  a22=(a13*a20);
  a23=(a5*a15);
  a24=(a23*a17);
  a25=(a14*a8);
  a26=(a25*a12);
  a24=(a24+a26);
  a8=(a8*a4);
  a4=(a12*a8);
  a15=(a15*a2);
  a2=(a17*a15);
  a4=(a4+a2);
  a2=(a24*a4);
  a22=(a22-a2);
  a2=(a25*a17);
  a26=(a23*a12);
  a2=(a2-a26);
  a15=(a12*a15);
  a8=(a17*a8);
  a15=(a15-a8);
  a8=(a2*a15);
  a26=(a9*a17);
  a27=(a16*a12);
  a26=(a26+a27);
  a19=(a17*a19);
  a21=(a12*a21);
  a19=(a19+a21);
  a21=(a26*a19);
  a8=(a8+a21);
  a22=(a22-a8);
  a22=(a1*a22);
  a8=-1.8809999999999999e-01;
  a21=(a24+a24);
  a27=(a21*a20);
  a27=(a3*a27);
  a28=(a2+a2);
  a29=(a28*a19);
  a29=(a3*a29);
  a27=(a27+a29);
  a27=(a8*a27);
  a22=(a22-a27);
  a27=1.6000000000000000e-01;
  a29=var0(15) ;
  a30=(a29/a3);
  a31=sin(a30);
  a32=(a26*a31);
  a29=(a29/a3);
  a33=cos(a29);
  a34=(a13*a33);
  a32=(a32+a34);
  a34=(a33*a20);
  a35=(a31*a19);
  a34=(a34+a35);
  a35=(a32*a34);
  a36=(a24*a33);
  a37=(a2*a31);
  a36=(a36+a37);
  a37=(a31*a15);
  a38=(a33*a4);
  a37=(a37-a38);
  a38=(a36*a37);
  a35=(a35+a38);
  a38=(a2*a33);
  a39=(a24*a31);
  a38=(a38-a39);
  a39=(a33*a15);
  a40=(a31*a4);
  a39=(a39+a40);
  a40=(a38*a39);
  a41=(a26*a33);
  a42=(a13*a31);
  a41=(a41-a42);
  a42=(a33*a19);
  a43=(a31*a20);
  a42=(a42-a43);
  a43=(a41*a42);
  a40=(a40+a43);
  a35=(a35-a40);
  a35=(a27*a35);
  a22=(a22+a35);
  a35=-4.2599999999999999e-01;
  a40=var0(16) ;
  a43=(a40/a3);
  a44=sin(a43);
  a45=(a41*a44);
  a40=(a40/a3);
  a46=cos(a40);
  a47=(a36*a46);
  a45=(a45+a47);
  a47=(a46*a39);
  a48=(a44*a34);
  a47=(a47-a48);
  a48=(a45*a47);
  a49=(a41*a46);
  a50=(a36*a44);
  a49=(a49-a50);
  a50=(a44*a39);
  a51=(a46*a34);
  a50=(a50+a51);
  a51=(a49*a50);
  a48=(a48+a51);
  a51=(a32*a46);
  a52=(a38*a44);
  a51=(a51-a52);
  a52=(a44*a37);
  a53=(a46*a42);
  a52=(a52+a53);
  a53=(a51*a52);
  a54=(a32*a44);
  a55=(a38*a46);
  a54=(a54+a55);
  a55=(a46*a37);
  a56=(a44*a42);
  a55=(a55-a56);
  a56=(a54*a55);
  a53=(a53+a56);
  a48=(a48+a53);
  a48=(a35*a48);
  a22=(a22+a48);
  a48=var0(17) ;
  a53=(a48/a3);
  a56=sin(a53);
  a57=(a49*a56);
  a48=(a48/a3);
  a58=cos(a48);
  a59=(a45*a58);
  a57=(a57+a59);
  a59=(a58*a47);
  a60=(a56*a50);
  a59=(a59-a60);
  a60=(a57*a59);
  a61=(a49*a58);
  a62=(a45*a56);
  a61=(a61-a62);
  a62=(a56*a47);
  a63=(a58*a50);
  a62=(a62+a63);
  a63=(a61*a62);
  a60=(a60+a63);
  a63=(a51*a58);
  a64=(a54*a56);
  a63=(a63-a64);
  a64=(a56*a55);
  a65=(a58*a52);
  a64=(a64+a65);
  a65=(a63*a64);
  a66=(a51*a56);
  a67=(a54*a58);
  a66=(a66+a67);
  a67=(a58*a55);
  a68=(a56*a52);
  a67=(a67-a68);
  a68=(a66*a67);
  a65=(a65+a68);
  a60=(a60+a65);
  a60=(a35*a60);
  a22=(a22+a60);
  p_output0(3)=a22;
  a22=-3.7619999999999998e-01;
  a60=(a2*a15);
  a65=(a26*a19);
  a60=(a60+a65);
  a65=(a13*a20);
  a68=(a24*a4);
  a65=(a65-a68);
  a60=(a60+a65);
  a60=(a22*a60);
  a65=4.6750000000000000e-02;
  a68=(a13+a13);
  a69=(a68*a4);
  a69=(a3*a69);
  a70=(a2+a2);
  a71=(a70*a19);
  a71=(a3*a71);
  a69=(a69-a71);
  a69=(a65*a69);
  a60=(a60+a69);
  a69=8.0000000000000002e-02;
  a71=(a32+a32);
  a72=(a71*a37);
  a72=(a3*a72);
  a73=(a38+a38);
  a74=(a73*a42);
  a74=(a3*a74);
  a72=(a72+a74);
  a72=(a69*a72);
  a60=(a60-a72);
  a52=(a45*a52);
  a72=(a54*a50);
  a52=(a52+a72);
  a47=(a51*a47);
  a72=(a49*a55);
  a47=(a47+a72);
  a52=(a52-a47);
  a52=(a35*a52);
  a60=(a60+a52);
  a52=(a57*a64);
  a47=(a66*a62);
  a52=(a52+a47);
  a47=(a63*a59);
  a72=(a61*a67);
  a47=(a47+a72);
  a52=(a52-a47);
  a52=(a35*a52);
  a60=(a60+a52);
  p_output0(4)=a60;
  a60=(a13*a19);
  a52=(a2*a4);
  a60=(a60-a52);
  a52=(a24*a15);
  a47=(a26*a20);
  a52=(a52+a47);
  a60=(a60-a52);
  a60=(a22*a60);
  a15=(a13*a15);
  a4=(a26*a4);
  a15=(a15-a4);
  a19=(a24*a19);
  a20=(a2*a20);
  a19=(a19+a20);
  a15=(a15+a19);
  a15=(a1*a15);
  a60=(a60+a15);
  a39=(a32*a39);
  a37=(a41*a37);
  a39=(a39+a37);
  a42=(a36*a42);
  a34=(a38*a34);
  a42=(a42+a34);
  a39=(a39+a42);
  a39=(a27*a39);
  a60=(a60+a39);
  a39=-2.1299999999999999e-01;
  a42=(a51+a51);
  a55=(a42*a55);
  a55=(a3*a55);
  a34=(a45+a45);
  a50=(a34*a50);
  a50=(a3*a50);
  a55=(a55+a50);
  a55=(a39*a55);
  a60=(a60-a55);
  a55=(a63+a63);
  a50=(a55*a67);
  a50=(a3*a50);
  a37=(a57+a57);
  a15=(a37*a62);
  a15=(a3*a15);
  a50=(a50+a15);
  a50=(a39*a50);
  a60=(a60-a50);
  p_output0(5)=a60;
  a60=casadi_sq(a57);
  a50=casadi_sq(a66);
  a60=(a60+a50);
  a60=(a3*a60);
  a60=(a0-a60);
  a50=(a61*a66);
  a15=(a63*a57);
  a50=(a50+a15);
  a50=(a3*a50);
  a15=casadi_sq(a50);
  a19=casadi_sq(a60);
  a15=(a15+a19);
  a60=(a60/a15);
  a19=(a66*a59);
  a20=(a61*a64);
  a19=(a19+a20);
  a20=(a57*a67);
  a4=(a63*a62);
  a20=(a20+a4);
  a19=(a19+a20);
  a19=(a3*a19);
  a19=(a60*a19);
  a50=(a50/a15);
  a15=(a57+a57);
  a20=(a15*a62);
  a4=(a66+a66);
  a52=(a4*a64);
  a20=(a20+a52);
  a20=(a3*a20);
  a20=(a50*a20);
  a19=(a19+a20);
  p_output0(6)=a19;
  a19=(a57*a59);
  a20=(a61*a62);
  a19=(a19+a20);
  a20=(a63*a64);
  a52=(a66*a67);
  a20=(a20+a52);
  a19=(a19-a20);
  a19=(a3*a19);
  a20=(a61*a57);
  a52=(a66*a63);
  a20=(a20-a52);
  a20=(a3*a20);
  a20=casadi_sq(a20);
  a20=(a0-a20);
  a20=sqrt(a20);
  a19=(a19/a20);
  p_output0(7)=a19;
  a19=casadi_sq(a63);
  a52=casadi_sq(a57);
  a19=(a19+a52);
  a19=(a3*a19);
  a0=(a0-a19);
  a19=(a61*a63);
  a52=(a57*a66);
  a19=(a19+a52);
  a19=(a3*a19);
  a52=casadi_sq(a19);
  a47=casadi_sq(a0);
  a52=(a52+a47);
  a0=(a0/a52);
  a59=(a63*a59);
  a47=(a61*a67);
  a59=(a59+a47);
  a47=(a66*a62);
  a64=(a57*a64);
  a47=(a47+a64);
  a59=(a59+a47);
  a59=(a3*a59);
  a59=(a0*a59);
  a19=(a19/a52);
  a52=(a63+a63);
  a67=(a52*a67);
  a47=(a57+a57);
  a62=(a47*a62);
  a67=(a67+a62);
  a67=(a3*a67);
  a67=(a19*a67);
  a59=(a59+a67);
  p_output0(8)=a59;
  a7=sin(a7);
  a7=(a18*a7);
  a59=(a14*a7);
  a67=(a17*a59);
  a6=cos(a6);
  a6=(a18*a6);
  a62=(a5*a6);
  a64=(a12*a62);
  a67=(a67+a64);
  a64=(a28*a67);
  a64=(a3*a64);
  a62=(a17*a62);
  a59=(a12*a59);
  a62=(a62-a59);
  a59=(a21*a62);
  a59=(a3*a59);
  a64=(a64-a59);
  a64=(a8*a64);
  a59=(a13*a62);
  a5=(a5*a7);
  a7=(a12*a5);
  a14=(a14*a6);
  a6=(a17*a14);
  a7=(a7+a6);
  a6=(a24*a7);
  a59=(a59-a6);
  a12=(a12*a14);
  a17=(a17*a5);
  a12=(a12-a17);
  a17=(a2*a12);
  a5=(a26*a67);
  a17=(a17-a5);
  a59=(a59-a17);
  a59=(a1*a59);
  a64=(a64+a59);
  a59=(a33*a62);
  a17=(a31*a67);
  a59=(a59-a17);
  a17=(a32*a59);
  a5=(a31*a12);
  a14=(a33*a7);
  a5=(a5-a14);
  a14=(a36*a5);
  a17=(a17+a14);
  a14=(a33*a12);
  a6=(a31*a7);
  a14=(a14+a6);
  a6=(a38*a14);
  a72=(a33*a67);
  a74=(a31*a62);
  a72=(a72+a74);
  a74=(a41*a72);
  a6=(a6-a74);
  a17=(a17-a6);
  a17=(a27*a17);
  a64=(a64+a17);
  a17=(a46*a14);
  a6=(a44*a59);
  a17=(a17-a6);
  a6=(a45*a17);
  a74=(a44*a14);
  a75=(a46*a59);
  a74=(a74+a75);
  a75=(a49*a74);
  a6=(a6+a75);
  a75=(a44*a5);
  a76=(a46*a72);
  a75=(a75-a76);
  a76=(a51*a75);
  a77=(a46*a5);
  a78=(a44*a72);
  a77=(a77+a78);
  a78=(a54*a77);
  a76=(a76+a78);
  a6=(a6+a76);
  a6=(a35*a6);
  a64=(a64+a6);
  a6=(a58*a17);
  a76=(a56*a74);
  a6=(a6-a76);
  a76=(a57*a6);
  a78=(a56*a17);
  a79=(a58*a74);
  a78=(a78+a79);
  a79=(a61*a78);
  a76=(a76+a79);
  a79=(a56*a77);
  a80=(a58*a75);
  a79=(a79+a80);
  a80=(a63*a79);
  a81=(a58*a77);
  a82=(a56*a75);
  a81=(a81-a82);
  a82=(a66*a81);
  a80=(a80+a82);
  a76=(a76+a80);
  a76=(a35*a76);
  a64=(a64+a76);
  p_output0(9)=a64;
  a64=(a2*a12);
  a76=(a26*a67);
  a64=(a64-a76);
  a76=(a13*a62);
  a80=(a24*a7);
  a76=(a76-a80);
  a64=(a64+a76);
  a64=(a22*a64);
  a76=(a68*a7);
  a76=(a3*a76);
  a80=(a70*a67);
  a80=(a3*a80);
  a76=(a76+a80);
  a76=(a65*a76);
  a64=(a64+a76);
  a76=(a73*a72);
  a76=(a3*a76);
  a80=(a71*a5);
  a80=(a3*a80);
  a76=(a76-a80);
  a76=(a69*a76);
  a64=(a64+a76);
  a75=(a45*a75);
  a76=(a54*a74);
  a75=(a75+a76);
  a17=(a51*a17);
  a76=(a49*a77);
  a17=(a17+a76);
  a75=(a75-a17);
  a75=(a35*a75);
  a64=(a64+a75);
  a75=(a57*a79);
  a17=(a66*a78);
  a75=(a75+a17);
  a17=(a63*a6);
  a76=(a61*a81);
  a17=(a17+a76);
  a75=(a75-a17);
  a75=(a35*a75);
  a64=(a64+a75);
  p_output0(10)=a64;
  a64=(a13*a12);
  a75=(a26*a7);
  a64=(a64-a75);
  a75=(a2*a62);
  a17=(a24*a67);
  a75=(a75-a17);
  a64=(a64+a75);
  a64=(a1*a64);
  a67=(a13*a67);
  a7=(a2*a7);
  a67=(a67+a7);
  a12=(a24*a12);
  a62=(a26*a62);
  a12=(a12+a62);
  a67=(a67+a12);
  a67=(a22*a67);
  a64=(a64-a67);
  a14=(a32*a14);
  a5=(a41*a5);
  a14=(a14+a5);
  a59=(a38*a59);
  a72=(a36*a72);
  a59=(a59-a72);
  a14=(a14+a59);
  a14=(a27*a14);
  a64=(a64+a14);
  a77=(a42*a77);
  a77=(a3*a77);
  a74=(a34*a74);
  a74=(a3*a74);
  a77=(a77+a74);
  a77=(a39*a77);
  a64=(a64-a77);
  a77=(a55*a81);
  a77=(a3*a77);
  a74=(a37*a78);
  a74=(a3*a74);
  a77=(a77+a74);
  a77=(a39*a77);
  a64=(a64-a77);
  p_output0(11)=a64;
  a64=(a66*a6);
  a77=(a61*a79);
  a64=(a64+a77);
  a77=(a57*a81);
  a74=(a63*a78);
  a77=(a77+a74);
  a64=(a64+a77);
  a64=(a3*a64);
  a64=(a60*a64);
  a77=(a15*a78);
  a74=(a4*a79);
  a77=(a77+a74);
  a77=(a3*a77);
  a77=(a50*a77);
  a64=(a64+a77);
  p_output0(12)=a64;
  a64=(a57*a6);
  a77=(a61*a78);
  a64=(a64+a77);
  a77=(a63*a79);
  a74=(a66*a81);
  a77=(a77+a74);
  a64=(a64-a77);
  a64=(a3*a64);
  a64=(a64/a20);
  p_output0(13)=a64;
  a6=(a63*a6);
  a64=(a61*a81);
  a6=(a6+a64);
  a64=(a66*a78);
  a79=(a57*a79);
  a64=(a64+a79);
  a6=(a6+a64);
  a6=(a3*a6);
  a6=(a0*a6);
  a81=(a52*a81);
  a78=(a47*a78);
  a81=(a81+a78);
  a81=(a3*a81);
  a81=(a19*a81);
  a6=(a6+a81);
  p_output0(14)=a6;
  a10=sin(a10);
  a10=(a18*a10);
  a6=(a25*a10);
  a11=cos(a11);
  a11=(a18*a11);
  a81=(a23*a11);
  a6=(a6+a81);
  a28=(a28*a6);
  a28=(a3*a28);
  a25=(a25*a11);
  a23=(a23*a10);
  a25=(a25-a23);
  a21=(a21*a25);
  a21=(a3*a21);
  a28=(a28-a21);
  a8=(a8*a28);
  a28=(a13*a25);
  a21=(a9*a11);
  a23=(a16*a10);
  a21=(a21+a23);
  a23=(a24*a21);
  a28=(a28+a23);
  a16=(a16*a11);
  a9=(a9*a10);
  a16=(a16-a9);
  a9=(a2*a16);
  a10=(a26*a6);
  a9=(a9-a10);
  a28=(a28-a9);
  a28=(a1*a28);
  a8=(a8+a28);
  a28=(a33*a25);
  a9=(a31*a6);
  a28=(a28-a9);
  a9=(a32*a28);
  a10=(a31*a16);
  a11=(a33*a21);
  a10=(a10+a11);
  a11=(a36*a10);
  a9=(a9+a11);
  a11=(a33*a16);
  a23=(a31*a21);
  a11=(a11-a23);
  a23=(a38*a11);
  a33=(a33*a6);
  a31=(a31*a25);
  a33=(a33+a31);
  a31=(a41*a33);
  a23=(a23-a31);
  a9=(a9-a23);
  a9=(a27*a9);
  a8=(a8+a9);
  a9=(a46*a11);
  a23=(a44*a28);
  a9=(a9-a23);
  a23=(a45*a9);
  a31=(a44*a11);
  a81=(a46*a28);
  a31=(a31+a81);
  a81=(a49*a31);
  a23=(a23+a81);
  a81=(a44*a10);
  a78=(a46*a33);
  a81=(a81-a78);
  a78=(a51*a81);
  a64=(a46*a10);
  a79=(a44*a33);
  a64=(a64+a79);
  a79=(a54*a64);
  a78=(a78+a79);
  a23=(a23+a78);
  a23=(a35*a23);
  a8=(a8+a23);
  a23=(a58*a9);
  a78=(a56*a31);
  a23=(a23-a78);
  a78=(a57*a23);
  a79=(a56*a9);
  a77=(a58*a31);
  a79=(a79+a77);
  a77=(a61*a79);
  a78=(a78+a77);
  a77=(a56*a64);
  a74=(a58*a81);
  a77=(a77+a74);
  a74=(a63*a77);
  a14=(a58*a64);
  a59=(a56*a81);
  a14=(a14-a59);
  a59=(a66*a14);
  a74=(a74+a59);
  a78=(a78+a74);
  a78=(a35*a78);
  a8=(a8+a78);
  p_output0(15)=a8;
  a8=(a2*a16);
  a78=(a26*a6);
  a8=(a8-a78);
  a78=(a13*a25);
  a74=(a24*a21);
  a78=(a78+a74);
  a8=(a8+a78);
  a8=(a22*a8);
  a70=(a70*a6);
  a70=(a3*a70);
  a68=(a68*a21);
  a68=(a3*a68);
  a70=(a70-a68);
  a65=(a65*a70);
  a8=(a8+a65);
  a65=(a73*a33);
  a65=(a3*a65);
  a70=(a71*a10);
  a70=(a3*a70);
  a65=(a65-a70);
  a65=(a69*a65);
  a8=(a8+a65);
  a81=(a45*a81);
  a65=(a54*a31);
  a81=(a81+a65);
  a9=(a51*a9);
  a65=(a49*a64);
  a9=(a9+a65);
  a81=(a81-a9);
  a81=(a35*a81);
  a8=(a8+a81);
  a81=(a57*a77);
  a9=(a66*a79);
  a81=(a81+a9);
  a9=(a63*a23);
  a65=(a61*a14);
  a9=(a9+a65);
  a81=(a81-a9);
  a81=(a35*a81);
  a8=(a8+a81);
  p_output0(16)=a8;
  a8=(a2*a21);
  a81=(a13*a6);
  a8=(a8-a81);
  a81=(a24*a16);
  a9=(a26*a25);
  a81=(a81+a9);
  a8=(a8-a81);
  a22=(a22*a8);
  a16=(a13*a16);
  a21=(a26*a21);
  a16=(a16+a21);
  a25=(a2*a25);
  a6=(a24*a6);
  a25=(a25-a6);
  a16=(a16+a25);
  a1=(a1*a16);
  a22=(a22+a1);
  a11=(a32*a11);
  a10=(a41*a10);
  a11=(a11+a10);
  a28=(a38*a28);
  a33=(a36*a33);
  a28=(a28-a33);
  a11=(a11+a28);
  a11=(a27*a11);
  a22=(a22+a11);
  a64=(a42*a64);
  a64=(a3*a64);
  a31=(a34*a31);
  a31=(a3*a31);
  a64=(a64+a31);
  a64=(a39*a64);
  a22=(a22-a64);
  a64=(a55*a14);
  a64=(a3*a64);
  a31=(a37*a79);
  a31=(a3*a31);
  a64=(a64+a31);
  a64=(a39*a64);
  a22=(a22-a64);
  p_output0(17)=a22;
  a22=(a66*a23);
  a64=(a61*a77);
  a22=(a22+a64);
  a64=(a57*a14);
  a31=(a63*a79);
  a64=(a64+a31);
  a22=(a22+a64);
  a22=(a3*a22);
  a22=(a60*a22);
  a64=(a15*a79);
  a31=(a4*a77);
  a64=(a64+a31);
  a64=(a3*a64);
  a64=(a50*a64);
  a22=(a22+a64);
  p_output0(18)=a22;
  a22=(a57*a23);
  a64=(a61*a79);
  a22=(a22+a64);
  a64=(a63*a77);
  a31=(a66*a14);
  a64=(a64+a31);
  a22=(a22-a64);
  a22=(a3*a22);
  a22=(a22/a20);
  p_output0(19)=a22;
  a23=(a63*a23);
  a22=(a61*a14);
  a23=(a23+a22);
  a22=(a66*a79);
  a77=(a57*a77);
  a22=(a22+a77);
  a23=(a23+a22);
  a23=(a3*a23);
  a23=(a0*a23);
  a14=(a52*a14);
  a79=(a47*a79);
  a14=(a14+a79);
  a14=(a3*a14);
  a14=(a19*a14);
  a23=(a23+a14);
  p_output0(20)=a23;
  a30=cos(a30);
  a30=(a18*a30);
  a23=(a2*a30);
  a29=sin(a29);
  a29=(a18*a29);
  a14=(a24*a29);
  a23=(a23-a14);
  a14=(a32*a23);
  a79=(a26*a30);
  a22=(a13*a29);
  a79=(a79-a22);
  a22=(a36*a79);
  a14=(a14+a22);
  a26=(a26*a29);
  a13=(a13*a30);
  a26=(a26+a13);
  a13=(a38*a26);
  a2=(a2*a29);
  a24=(a24*a30);
  a2=(a2+a24);
  a24=(a41*a2);
  a13=(a13+a24);
  a14=(a14+a13);
  a14=(a27*a14);
  a13=(a46*a23);
  a24=(a44*a26);
  a13=(a13-a24);
  a24=(a49*a13);
  a30=(a46*a26);
  a29=(a44*a23);
  a30=(a30+a29);
  a29=(a45*a30);
  a24=(a24-a29);
  a29=(a44*a79);
  a22=(a46*a2);
  a29=(a29-a22);
  a22=(a51*a29);
  a46=(a46*a79);
  a44=(a44*a2);
  a46=(a46+a44);
  a44=(a54*a46);
  a22=(a22+a44);
  a24=(a24+a22);
  a24=(a35*a24);
  a14=(a14+a24);
  a24=(a58*a13);
  a22=(a56*a30);
  a24=(a24-a22);
  a22=(a61*a24);
  a44=(a58*a30);
  a77=(a56*a13);
  a44=(a44+a77);
  a77=(a57*a44);
  a22=(a22-a77);
  a77=(a56*a46);
  a64=(a58*a29);
  a77=(a77+a64);
  a64=(a63*a77);
  a31=(a58*a46);
  a11=(a56*a29);
  a31=(a31-a11);
  a11=(a66*a31);
  a64=(a64+a11);
  a22=(a22+a64);
  a22=(a35*a22);
  a14=(a14+a22);
  p_output0(21)=a14;
  a73=(a73*a2);
  a73=(a3*a73);
  a71=(a71*a79);
  a71=(a3*a71);
  a73=(a73-a71);
  a69=(a69*a73);
  a29=(a45*a29);
  a73=(a54*a13);
  a29=(a29+a73);
  a73=(a49*a46);
  a30=(a51*a30);
  a73=(a73-a30);
  a29=(a29-a73);
  a29=(a35*a29);
  a69=(a69+a29);
  a29=(a57*a77);
  a73=(a66*a24);
  a29=(a29+a73);
  a73=(a61*a31);
  a30=(a63*a44);
  a73=(a73-a30);
  a29=(a29-a73);
  a29=(a35*a29);
  a69=(a69+a29);
  p_output0(22)=a69;
  a79=(a41*a79);
  a26=(a32*a26);
  a79=(a79-a26);
  a23=(a38*a23);
  a2=(a36*a2);
  a23=(a23-a2);
  a79=(a79+a23);
  a27=(a27*a79);
  a46=(a42*a46);
  a46=(a3*a46);
  a13=(a34*a13);
  a13=(a3*a13);
  a46=(a46+a13);
  a46=(a39*a46);
  a27=(a27-a46);
  a46=(a55*a31);
  a46=(a3*a46);
  a13=(a37*a24);
  a13=(a3*a13);
  a46=(a46+a13);
  a46=(a39*a46);
  a27=(a27-a46);
  p_output0(23)=a27;
  a27=(a61*a77);
  a46=(a66*a44);
  a27=(a27-a46);
  a46=(a57*a31);
  a13=(a63*a24);
  a46=(a46+a13);
  a27=(a27+a46);
  a27=(a3*a27);
  a27=(a60*a27);
  a46=(a15*a24);
  a13=(a4*a77);
  a46=(a46+a13);
  a46=(a3*a46);
  a46=(a50*a46);
  a27=(a27+a46);
  p_output0(24)=a27;
  a27=(a61*a24);
  a46=(a57*a44);
  a27=(a27-a46);
  a46=(a63*a77);
  a13=(a66*a31);
  a46=(a46+a13);
  a27=(a27-a46);
  a27=(a3*a27);
  a27=(a27/a20);
  p_output0(25)=a27;
  a27=(a61*a31);
  a44=(a63*a44);
  a27=(a27-a44);
  a44=(a66*a24);
  a77=(a57*a77);
  a44=(a44+a77);
  a27=(a27+a44);
  a27=(a3*a27);
  a27=(a0*a27);
  a31=(a52*a31);
  a24=(a47*a24);
  a31=(a31+a24);
  a31=(a3*a31);
  a31=(a19*a31);
  a27=(a27+a31);
  p_output0(26)=a27;
  a43=cos(a43);
  a43=(a18*a43);
  a27=(a41*a43);
  a40=sin(a40);
  a40=(a18*a40);
  a31=(a36*a40);
  a27=(a27-a31);
  a31=(a49*a27);
  a41=(a41*a40);
  a36=(a36*a43);
  a41=(a41+a36);
  a36=(a45*a41);
  a31=(a31-a36);
  a36=(a32*a43);
  a24=(a38*a40);
  a36=(a36-a24);
  a24=(a51*a36);
  a32=(a32*a40);
  a38=(a38*a43);
  a32=(a32+a38);
  a38=(a54*a32);
  a24=(a24-a38);
  a31=(a31+a24);
  a31=(a35*a31);
  a24=(a58*a27);
  a38=(a56*a41);
  a24=(a24-a38);
  a38=(a61*a24);
  a43=(a58*a41);
  a40=(a56*a27);
  a43=(a43+a40);
  a40=(a57*a43);
  a38=(a38-a40);
  a40=(a58*a36);
  a44=(a56*a32);
  a40=(a40-a44);
  a44=(a63*a40);
  a58=(a58*a32);
  a56=(a56*a36);
  a58=(a58+a56);
  a56=(a66*a58);
  a44=(a44-a56);
  a38=(a38+a44);
  a38=(a35*a38);
  a31=(a31+a38);
  p_output0(27)=a31;
  a36=(a45*a36);
  a31=(a54*a27);
  a36=(a36+a31);
  a41=(a51*a41);
  a31=(a49*a32);
  a41=(a41+a31);
  a36=(a36+a41);
  a36=(a35*a36);
  a41=(a57*a40);
  a31=(a66*a24);
  a41=(a41+a31);
  a31=(a63*a43);
  a38=(a61*a58);
  a31=(a31+a38);
  a41=(a41+a31);
  a41=(a35*a41);
  a36=(a36+a41);
  p_output0(28)=a36;
  a42=(a42*a32);
  a42=(a3*a42);
  a34=(a34*a27);
  a34=(a3*a34);
  a42=(a42-a34);
  a42=(a39*a42);
  a34=(a55*a58);
  a34=(a3*a34);
  a27=(a37*a24);
  a27=(a3*a27);
  a34=(a34-a27);
  a34=(a39*a34);
  a42=(a42+a34);
  p_output0(29)=a42;
  a42=(a61*a40);
  a34=(a66*a43);
  a42=(a42-a34);
  a34=(a63*a24);
  a27=(a57*a58);
  a34=(a34-a27);
  a42=(a42+a34);
  a42=(a3*a42);
  a42=(a60*a42);
  a34=(a15*a24);
  a27=(a4*a40);
  a34=(a34+a27);
  a34=(a3*a34);
  a34=(a50*a34);
  a42=(a42+a34);
  p_output0(30)=a42;
  a42=(a61*a24);
  a34=(a57*a43);
  a42=(a42-a34);
  a34=(a63*a40);
  a27=(a66*a58);
  a34=(a34-a27);
  a42=(a42-a34);
  a42=(a3*a42);
  a42=(a42/a20);
  p_output0(31)=a42;
  a42=(a66*a24);
  a40=(a57*a40);
  a42=(a42+a40);
  a43=(a63*a43);
  a40=(a61*a58);
  a43=(a43+a40);
  a42=(a42-a43);
  a42=(a3*a42);
  a42=(a0*a42);
  a24=(a47*a24);
  a58=(a52*a58);
  a24=(a24-a58);
  a24=(a3*a24);
  a24=(a19*a24);
  a42=(a42+a24);
  p_output0(32)=a42;
  a53=cos(a53);
  a53=(a18*a53);
  a42=(a49*a53);
  a48=sin(a48);
  a18=(a18*a48);
  a48=(a45*a18);
  a42=(a42-a48);
  a48=(a61*a42);
  a49=(a49*a18);
  a45=(a45*a53);
  a49=(a49+a45);
  a45=(a57*a49);
  a48=(a48-a45);
  a45=(a51*a53);
  a24=(a54*a18);
  a45=(a45-a24);
  a24=(a63*a45);
  a51=(a51*a18);
  a54=(a54*a53);
  a51=(a51+a54);
  a54=(a66*a51);
  a24=(a24-a54);
  a48=(a48+a24);
  a48=(a35*a48);
  p_output0(33)=a48;
  a48=(a57*a45);
  a24=(a66*a42);
  a48=(a48+a24);
  a24=(a63*a49);
  a54=(a61*a51);
  a24=(a24+a54);
  a48=(a48+a24);
  a35=(a35*a48);
  p_output0(34)=a35;
  a55=(a55*a51);
  a55=(a3*a55);
  a37=(a37*a42);
  a37=(a3*a37);
  a55=(a55-a37);
  a39=(a39*a55);
  p_output0(35)=a39;
  a39=(a61*a45);
  a55=(a66*a49);
  a39=(a39-a55);
  a55=(a63*a42);
  a37=(a57*a51);
  a55=(a55-a37);
  a39=(a39+a55);
  a39=(a3*a39);
  a60=(a60*a39);
  a15=(a15*a42);
  a4=(a4*a45);
  a15=(a15+a4);
  a15=(a3*a15);
  a50=(a50*a15);
  a60=(a60+a50);
  p_output0(36)=a60;
  a60=(a61*a42);
  a50=(a57*a49);
  a60=(a60-a50);
  a50=(a63*a45);
  a15=(a66*a51);
  a50=(a50-a15);
  a60=(a60-a50);
  a60=(a3*a60);
  a60=(a60/a20);
  p_output0(37)=a60;
  a66=(a66*a42);
  a57=(a57*a45);
  a66=(a66+a57);
  a63=(a63*a49);
  a61=(a61*a51);
  a63=(a63+a61);
  a66=(a66-a63);
  a66=(a3*a66);
  a0=(a0*a66);
  a47=(a47*a42);
  a52=(a52*a51);
  a47=(a47-a52);
  a3=(a3*a47);
  a19=(a19*a3);
  a0=(a0+a19);
  p_output0(38)=a0;
  
}

void J_ORIGIN_RL_FOOT (Eigen::Matrix<double,6, 18> &p_output0, const Eigen::Matrix<double,18, 1> &var0) {
   /* Call Subroutines */
   output1(p_output0, var0);
}
