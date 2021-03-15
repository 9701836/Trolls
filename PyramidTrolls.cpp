#include <iostream>
#include <iomanip>
#include <math.h>
#include "PyramidTrolls.h"
using namespace std;

Pyramid :: Pyramid(const double l, const double w, const double h)
{}

void Pyramid :: setBox(const double l, const double w, const double h)
{
  length = l;
  width = w;
  height = h;
}
double Pyramid :: calcVol()
{
  double vol = length * width * height/3.0;
  return vol;
}
double Pyramid :: calcSurf()
{
  double surf = length*width+length*sqrt((width/2)*(width/2)+height*height)+width*sqrt(length*length/4+height*height); 
  return surf;
}
void Pyramid :: print() const{}
