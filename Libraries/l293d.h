#ifndef l293d_h
#define l293d_h

#include <inttypes.h>

void dc_Init(int d0, int d1, int d2, int d3);
void front();
void back();
void left();
void right();

#endif
