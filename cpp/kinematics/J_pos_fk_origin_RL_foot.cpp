/*
 * Automatically Generated from CasADI.
 * 2023-08-17 12:25:55
 */
#include "J_pos_fk_origin_RL_foot.h"
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
 * Sub functions J_pos_fk_origin_RL_foot:(i0[18])->(o0[3x18,21nz])
 */
static void output1(Eigen::Matrix<double,3, 18> &p_output0, const Eigen::Matrix<double,18, 1> &var0) { 

  double a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96;
  a0=1.;
  p_output0(0)=a0;
  p_output0(1)=a0;
  p_output0(2)=a0;
  a0=5.0000000000000000e-01;
  a1=var0(3) ;
  a2=2.;
  a3=(a1/a2);
  a4=cos(a3);
  a5=var0(4) ;
  a6=(a5/a2);
  a7=sin(a6);
  a8=var0(5) ;
  a9=(a8/a2);
  a10=sin(a9);
  a11=var0(15) ;
  a12=(a11/a2);
  a13=cos(a12);
  a14=var0(16) ;
  a15=(a14/a2);
  a16=sin(a15);
  a17=var0(17) ;
  a18=(a17/a2);
  a19=cos(a18);
  a20=-4.2599999999999999e-01;
  a1=(a1/a2);
  a21=cos(a1);
  a5=(a5/a2);
  a22=cos(a5);
  a23=(a21*a22);
  a8=(a8/a2);
  a24=cos(a8);
  a25=(a23*a24);
  a3=sin(a3);
  a26=(a3*a7);
  a27=(a26*a10);
  a25=(a25+a27);
  a27=(a25*a13);
  a28=(a23*a10);
  a29=(a26*a24);
  a28=(a28-a29);
  a11=(a11/a2);
  a29=sin(a11);
  a30=(a28*a29);
  a27=(a27-a30);
  a14=(a14/a2);
  a30=cos(a14);
  a31=(a27*a30);
  a32=(a21*a7);
  a33=(a32*a24);
  a34=(a3*a22);
  a35=(a34*a10);
  a33=(a33+a35);
  a35=(a33*a13);
  a36=(a34*a24);
  a37=(a32*a10);
  a36=(a36-a37);
  a37=(a36*a29);
  a35=(a35+a37);
  a37=(a35*a16);
  a31=(a31-a37);
  a37=(a31*a19);
  a38=(a27*a16);
  a39=(a35*a30);
  a38=(a38+a39);
  a17=(a17/a2);
  a2=sin(a17);
  a39=(a38*a2);
  a37=(a37-a39);
  a39=(a20*a37);
  a40=(a19*a39);
  a41=(a31*a2);
  a42=(a38*a19);
  a41=(a41+a42);
  a42=(a20*a41);
  a43=(a2*a42);
  a40=(a40-a43);
  a43=(a20*a31);
  a40=(a40+a43);
  a43=(a16*a40);
  a44=(a2*a39);
  a45=(a19*a42);
  a44=(a44+a45);
  a45=(a20*a38);
  a44=(a44+a45);
  a45=(a30*a44);
  a43=(a43+a45);
  a45=-1.6000000000000000e-01;
  a46=(a36*a13);
  a47=(a33*a29);
  a46=(a46-a47);
  a47=(a45*a46);
  a43=(a43+a47);
  a47=(a13*a43);
  a48=(a25*a29);
  a49=(a28*a13);
  a48=(a48+a49);
  a49=(a48*a30);
  a50=(a46*a16);
  a49=(a49-a50);
  a50=(a49*a2);
  a51=(a48*a16);
  a52=(a46*a30);
  a51=(a51+a52);
  a52=(a51*a19);
  a50=(a50+a52);
  a52=(a20*a50);
  a53=(a19*a52);
  a54=(a49*a19);
  a55=(a51*a2);
  a54=(a54-a55);
  a55=(a20*a54);
  a56=(a2*a55);
  a53=(a53+a56);
  a56=(a20*a51);
  a53=(a53+a56);
  a56=(a30*a53);
  a57=(a19*a55);
  a58=(a2*a52);
  a57=(a57-a58);
  a58=(a20*a49);
  a57=(a57+a58);
  a58=(a16*a57);
  a56=(a56+a58);
  a58=1.6000000000000000e-01;
  a59=(a58*a35);
  a56=(a56+a59);
  a59=(a29*a56);
  a47=(a47+a59);
  a59=-9.3500000000000000e-02;
  a60=(a59*a36);
  a47=(a47+a60);
  a60=(a10*a47);
  a61=(a13*a56);
  a62=(a29*a43);
  a61=(a61-a62);
  a62=9.3500000000000000e-02;
  a63=(a62*a33);
  a61=(a61+a63);
  a63=(a24*a61);
  a60=(a60-a63);
  a63=(a7*a60);
  a64=(a30*a57);
  a65=(a16*a53);
  a64=(a64-a65);
  a65=(a45*a27);
  a64=(a64+a65);
  a65=(a13*a64);
  a66=(a30*a40);
  a67=(a16*a44);
  a66=(a66-a67);
  a67=(a58*a48);
  a66=(a66+a67);
  a67=(a29*a66);
  a65=(a65+a67);
  a67=(a59*a25);
  a65=(a65+a67);
  a67=3.7619999999999998e-01;
  a68=(a36+a36);
  a68=(a67*a68);
  a65=(a65+a68);
  a68=(a24*a65);
  a69=(a13*a66);
  a70=(a29*a64);
  a69=(a69-a70);
  a70=(a62*a28);
  a69=(a69+a70);
  a70=(a33+a33);
  a70=(a67*a70);
  a69=(a69+a70);
  a70=(a10*a69);
  a68=(a68+a70);
  a70=(a22*a68);
  a63=(a63+a70);
  a63=(a4*a63);
  a63=(a0*a63);
  a1=sin(a1);
  a70=(a24*a47);
  a71=(a10*a61);
  a70=(a70+a71);
  a71=(a22*a70);
  a72=(a24*a69);
  a73=(a10*a65);
  a72=(a72-a73);
  a73=(a7*a72);
  a71=(a71+a73);
  a71=(a1*a71);
  a71=(a0*a71);
  a63=(a63-a71);
  p_output0(3)=a63;
  a63=-3.7619999999999998e-01;
  a71=(a63*a36);
  a73=(a20*a51);
  a50=(a20*a50);
  a74=(a19*a50);
  a73=(a73+a74);
  a74=4.2599999999999999e-01;
  a75=(a74*a54);
  a76=(a2*a75);
  a73=(a73-a76);
  a76=(a16*a73);
  a77=(a74*a49);
  a78=(a2*a50);
  a77=(a77+a78);
  a78=(a19*a75);
  a77=(a77+a78);
  a78=(a30*a77);
  a76=(a76+a78);
  a78=(a13*a76);
  a71=(a71+a78);
  a78=(a48+a48);
  a78=(a45*a78);
  a79=(a74*a31);
  a37=(a74*a37);
  a80=(a19*a37);
  a79=(a79+a80);
  a80=(a20*a41);
  a81=(a2*a80);
  a79=(a79+a81);
  a81=(a30*a79);
  a78=(a78+a81);
  a20=(a20*a38);
  a81=(a2*a37);
  a20=(a20-a81);
  a81=(a19*a80);
  a20=(a20+a81);
  a81=(a16*a20);
  a78=(a78+a81);
  a81=(a29*a78);
  a71=(a71+a81);
  a81=(a10*a71);
  a82=(a28+a28);
  a82=(a59*a82);
  a83=(a63*a33);
  a82=(a82+a83);
  a83=(a29*a76);
  a82=(a82-a83);
  a83=(a13*a78);
  a82=(a82+a83);
  a83=(a24*a82);
  a81=(a81-a83);
  a83=(a7*a81);
  a84=(a36+a36);
  a59=(a59*a84);
  a84=(a63*a25);
  a59=(a59+a84);
  a84=(a46+a46);
  a45=(a45*a84);
  a84=(a16*a79);
  a45=(a45-a84);
  a84=(a30*a20);
  a45=(a45+a84);
  a84=(a13*a45);
  a59=(a59+a84);
  a84=(a30*a73);
  a85=(a16*a77);
  a84=(a84-a85);
  a85=(a29*a84);
  a59=(a59+a85);
  a85=(a24*a59);
  a86=(a63*a28);
  a87=(a29*a45);
  a86=(a86-a87);
  a87=(a13*a84);
  a86=(a86+a87);
  a87=(a10*a86);
  a85=(a85+a87);
  a87=(a22*a85);
  a83=(a83+a87);
  a83=(a4*a83);
  a83=(a0*a83);
  a87=(a24*a71);
  a88=(a10*a82);
  a87=(a87+a88);
  a88=(a22*a87);
  a89=(a24*a86);
  a90=(a10*a59);
  a89=(a89-a90);
  a90=(a7*a89);
  a88=(a88+a90);
  a88=(a1*a88);
  a88=(a0*a88);
  a83=(a83-a88);
  p_output0(4)=a83;
  a83=(a62*a28);
  a88=(a67*a33);
  a83=(a83+a88);
  a88=(a58*a48);
  a90=(a38+a38);
  a90=(a74*a90);
  a41=(a41+a41);
  a41=(a74*a41);
  a91=(a19*a41);
  a90=(a90+a91);
  a91=(a16*a90);
  a88=(a88+a91);
  a91=(a2*a41);
  a92=(a30*a91);
  a88=(a88+a92);
  a92=(a13*a88);
  a83=(a83+a92);
  a92=(a58*a27);
  a93=(a49+a49);
  a93=(a74*a93);
  a54=(a54+a54);
  a74=(a74*a54);
  a19=(a19*a74);
  a93=(a93+a19);
  a19=(a30*a93);
  a92=(a92+a19);
  a2=(a2*a74);
  a19=(a16*a2);
  a92=(a92-a19);
  a19=(a29*a92);
  a83=(a83+a19);
  a19=(a10*a83);
  a54=(a62*a25);
  a94=(a63*a36);
  a54=(a54+a94);
  a94=(a29*a88);
  a54=(a54-a94);
  a94=(a13*a92);
  a54=(a54+a94);
  a94=(a24*a54);
  a19=(a19-a94);
  a94=(a7*a19);
  a95=(a62*a33);
  a63=(a63*a28);
  a95=(a95+a63);
  a63=(a58*a35);
  a96=(a16*a93);
  a63=(a63-a96);
  a96=(a30*a2);
  a63=(a63-a96);
  a96=(a13*a63);
  a95=(a95+a96);
  a58=(a58*a46);
  a30=(a30*a90);
  a58=(a58+a30);
  a16=(a16*a91);
  a58=(a58-a16);
  a16=(a29*a58);
  a95=(a95+a16);
  a16=(a24*a95);
  a62=(a62*a36);
  a67=(a67*a25);
  a62=(a62+a67);
  a29=(a29*a63);
  a62=(a62-a29);
  a13=(a13*a58);
  a62=(a62+a13);
  a13=(a10*a62);
  a16=(a16+a13);
  a13=(a22*a16);
  a94=(a94+a13);
  a4=(a4*a94);
  a4=(a0*a4);
  a94=(a24*a83);
  a13=(a10*a54);
  a94=(a94+a13);
  a22=(a22*a94);
  a24=(a24*a62);
  a10=(a10*a95);
  a24=(a24-a10);
  a7=(a7*a24);
  a22=(a22+a7);
  a1=(a1*a22);
  a1=(a0*a1);
  a4=(a4-a1);
  p_output0(5)=a4;
  a6=cos(a6);
  a60=(a3*a60);
  a72=(a21*a72);
  a60=(a60+a72);
  a60=(a6*a60);
  a60=(a0*a60);
  a5=sin(a5);
  a70=(a21*a70);
  a68=(a3*a68);
  a70=(a70+a68);
  a70=(a5*a70);
  a70=(a0*a70);
  a60=(a60-a70);
  p_output0(6)=a60;
  a81=(a3*a81);
  a89=(a21*a89);
  a81=(a81+a89);
  a81=(a6*a81);
  a81=(a0*a81);
  a87=(a21*a87);
  a85=(a3*a85);
  a87=(a87+a85);
  a87=(a5*a87);
  a87=(a0*a87);
  a81=(a81-a87);
  p_output0(7)=a81;
  a19=(a3*a19);
  a24=(a21*a24);
  a19=(a19+a24);
  a6=(a6*a19);
  a6=(a0*a6);
  a21=(a21*a94);
  a3=(a3*a16);
  a21=(a21+a3);
  a5=(a5*a21);
  a5=(a0*a5);
  a6=(a6-a5);
  p_output0(8)=a6;
  a9=cos(a9);
  a6=(a26*a47);
  a5=(a23*a61);
  a6=(a6+a5);
  a5=(a32*a65);
  a6=(a6-a5);
  a5=(a34*a69);
  a6=(a6+a5);
  a6=(a9*a6);
  a6=(a0*a6);
  a8=sin(a8);
  a47=(a23*a47);
  a61=(a26*a61);
  a47=(a47-a61);
  a65=(a34*a65);
  a47=(a47+a65);
  a69=(a32*a69);
  a47=(a47+a69);
  a47=(a8*a47);
  a47=(a0*a47);
  a6=(a6-a47);
  p_output0(9)=a6;
  a6=(a26*a71);
  a47=(a23*a82);
  a6=(a6+a47);
  a47=(a32*a59);
  a6=(a6-a47);
  a47=(a34*a86);
  a6=(a6+a47);
  a6=(a9*a6);
  a6=(a0*a6);
  a71=(a23*a71);
  a82=(a26*a82);
  a71=(a71-a82);
  a59=(a34*a59);
  a71=(a71+a59);
  a86=(a32*a86);
  a71=(a71+a86);
  a71=(a8*a71);
  a71=(a0*a71);
  a6=(a6-a71);
  p_output0(10)=a6;
  a6=(a26*a83);
  a71=(a23*a54);
  a6=(a6+a71);
  a71=(a32*a95);
  a6=(a6-a71);
  a71=(a34*a62);
  a6=(a6+a71);
  a9=(a9*a6);
  a9=(a0*a9);
  a23=(a23*a83);
  a26=(a26*a54);
  a23=(a23-a26);
  a34=(a34*a95);
  a23=(a23+a34);
  a32=(a32*a62);
  a23=(a23+a32);
  a8=(a8*a23);
  a8=(a0*a8);
  a9=(a9-a8);
  p_output0(11)=a9;
  a11=cos(a11);
  a9=(a25*a56);
  a8=(a33*a64);
  a23=(a28*a43);
  a8=(a8+a23);
  a9=(a9-a8);
  a8=(a36*a66);
  a9=(a9+a8);
  a9=(a11*a9);
  a9=(a0*a9);
  a12=sin(a12);
  a64=(a36*a64);
  a43=(a25*a43);
  a64=(a64+a43);
  a56=(a28*a56);
  a64=(a64+a56);
  a66=(a33*a66);
  a64=(a64+a66);
  a64=(a12*a64);
  a64=(a0*a64);
  a9=(a9-a64);
  p_output0(12)=a9;
  a9=(a25*a78);
  a64=(a33*a45);
  a66=(a28*a76);
  a64=(a64+a66);
  a9=(a9-a64);
  a64=(a36*a84);
  a9=(a9+a64);
  a9=(a11*a9);
  a9=(a0*a9);
  a45=(a36*a45);
  a76=(a25*a76);
  a45=(a45+a76);
  a78=(a28*a78);
  a45=(a45+a78);
  a84=(a33*a84);
  a45=(a45+a84);
  a45=(a12*a45);
  a45=(a0*a45);
  a9=(a9-a45);
  p_output0(13)=a9;
  a9=(a25*a92);
  a45=(a33*a63);
  a84=(a28*a88);
  a45=(a45+a84);
  a9=(a9-a45);
  a45=(a36*a58);
  a9=(a9+a45);
  a11=(a11*a9);
  a11=(a0*a11);
  a36=(a36*a63);
  a25=(a25*a88);
  a36=(a36+a25);
  a28=(a28*a92);
  a36=(a36+a28);
  a33=(a33*a58);
  a36=(a36+a33);
  a12=(a12*a36);
  a12=(a0*a12);
  a11=(a11-a12);
  p_output0(14)=a11;
  a15=cos(a15);
  a11=(a48*a57);
  a12=(a46*a53);
  a11=(a11-a12);
  a12=(a27*a40);
  a11=(a11+a12);
  a12=(a35*a44);
  a11=(a11-a12);
  a11=(a15*a11);
  a11=(a0*a11);
  a14=sin(a14);
  a53=(a48*a53);
  a57=(a46*a57);
  a53=(a53+a57);
  a40=(a35*a40);
  a53=(a53+a40);
  a44=(a27*a44);
  a53=(a53+a44);
  a53=(a14*a53);
  a53=(a0*a53);
  a11=(a11-a53);
  p_output0(15)=a11;
  a11=(a48*a20);
  a53=(a46*a79);
  a11=(a11-a53);
  a53=(a27*a73);
  a11=(a11+a53);
  a53=(a35*a77);
  a11=(a11-a53);
  a11=(a15*a11);
  a11=(a0*a11);
  a79=(a48*a79);
  a20=(a46*a20);
  a79=(a79+a20);
  a73=(a35*a73);
  a79=(a79+a73);
  a77=(a27*a77);
  a79=(a79+a77);
  a79=(a14*a79);
  a79=(a0*a79);
  a11=(a11-a79);
  p_output0(16)=a11;
  a11=(a27*a90);
  a79=(a46*a93);
  a77=(a48*a2);
  a79=(a79+a77);
  a11=(a11-a79);
  a79=(a35*a91);
  a11=(a11-a79);
  a15=(a15*a11);
  a15=(a0*a15);
  a48=(a48*a93);
  a46=(a46*a2);
  a48=(a48-a46);
  a35=(a35*a90);
  a48=(a48+a35);
  a27=(a27*a91);
  a48=(a48+a27);
  a14=(a14*a48);
  a14=(a0*a14);
  a15=(a15-a14);
  p_output0(17)=a15;
  a17=cos(a17);
  a15=(a49*a55);
  a14=(a51*a52);
  a15=(a15-a14);
  a14=(a31*a39);
  a15=(a15+a14);
  a14=(a38*a42);
  a15=(a15-a14);
  a15=(a17*a15);
  a15=(a0*a15);
  a18=sin(a18);
  a52=(a49*a52);
  a55=(a51*a55);
  a52=(a52+a55);
  a39=(a38*a39);
  a52=(a52+a39);
  a42=(a31*a42);
  a52=(a52+a42);
  a52=(a18*a52);
  a52=(a0*a52);
  a15=(a15-a52);
  p_output0(18)=a15;
  a15=(a49*a80);
  a52=(a51*a37);
  a15=(a15-a52);
  a52=(a31*a50);
  a15=(a15+a52);
  a52=(a38*a75);
  a15=(a15-a52);
  a15=(a17*a15);
  a15=(a0*a15);
  a37=(a49*a37);
  a80=(a51*a80);
  a37=(a37+a80);
  a50=(a38*a50);
  a37=(a37+a50);
  a75=(a31*a75);
  a37=(a37+a75);
  a37=(a18*a37);
  a37=(a0*a37);
  a15=(a15-a37);
  p_output0(19)=a15;
  a31=(a31*a41);
  a51=(a51*a74);
  a31=(a31-a51);
  a17=(a17*a31);
  a17=(a0*a17);
  a49=(a49*a74);
  a38=(a38*a41);
  a49=(a49+a38);
  a18=(a18*a49);
  a0=(a0*a18);
  a17=(a17-a0);
  p_output0(20)=a17;
  
}

void J_pos_fk_origin_RL_foot (Eigen::Matrix<double,3, 18> &p_output0, const Eigen::Matrix<double,18, 1> &var0) {
   /* Call Subroutines */
   output1(p_output0, var0);
}
