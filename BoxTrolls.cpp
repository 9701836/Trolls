#include <iostream>
#include <iomanip>
#include "BoxTrolls.h"
using namespace std;

Box :: Box(const float l, const float w, const float h)
{}

void Box :: setBox(const float l, const float w, const float h)
{
  length = l;
  width = w;
  height = h;
}
float Box :: calcVol()
{
  float vol = length * width * height;
  return vol;
}
float Box :: calcSurf()
{
  float surf = 2*length*width+2*length*height+2*width*height;
  return surf;
}
void Box :: print() const{}
