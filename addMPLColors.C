#if !defined( __CINT__) || defined (__MAKECINT__)
#ifndef ROOT_TStyle
#include "TStyle.h"
#endif
#endif
const int mplColors[10] = {1251,1252,1253,1254,1255,1256,1257,1258,1259,1260};

void addMPLColors() {
  // This looks like a memory leak, but it isn't
  new TColor(1251, 0x1f / 255.0, 0x77 / 255.0, 0xb4 / 255.0);
  new TColor(1252, 0xff / 255.0, 0x7f / 255.0, 0x0e / 255.0);
  new TColor(1253, 0x2c / 255.0, 0xa0 / 255.0, 0x2c / 255.0);
  new TColor(1254, 0xd6 / 255.0, 0x27 / 255.0, 0x28 / 255.0);
  new TColor(1255, 0x94 / 255.0, 0x67 / 255.0, 0xbd / 255.0);
  new TColor(1256, 0x8c / 255.0, 0x56 / 255.0, 0x4b / 255.0);
  new TColor(1257, 0xe3 / 255.0, 0x77 / 255.0, 0xc2 / 255.0);
  new TColor(1258, 0x7f / 255.0, 0x7f / 255.0, 0x7f / 255.0);
  new TColor(1259, 0xbc / 255.0, 0xbd / 255.0, 0x22 / 255.0);
  new TColor(1260, 0x12 / 255.0, 0xbe / 255.0, 0xcf / 255.0);
}



