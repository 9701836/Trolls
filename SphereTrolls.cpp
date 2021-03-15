#include <iostream>
#include <iomanip>
#include <math.h>
#include "SphereTrolls.h"
using namespace std;

Sphere :: Sphere(const double l)
{}

void Sphere :: setBox(const double l)
{
  radius = l;
}
double Sphere :: calcVol()
{
  double vol =M_PI*4*radius*radius*radius/3;
  return vol;
}
double Sphere :: calcSurf()
{
  double surf =M_PI*4*radius*radius;
  return surf;
}
void Sphere :: print() const{}
