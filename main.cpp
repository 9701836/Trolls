#include <iostream>
#include "BoxTrolls.h"
#include "PyramidTrolls.h"
#include "SphereTrolls.h"
#include <math.h>
#include <string>
#include <unistd.h>
using namespace std;
int main() {
  string temp;
  double x,y,z;
  cout << "Find the volume or surface area of prism!"<<endl;
  cout << "To build a box, press 1"<<endl;
  cout << "To build a pyramid, press 2"<<endl;
  cout << "To build a sphere, press 3"<<endl;
  cin >> temp;
  if (temp=="1")
  {
    cout <<"To find the surface area, press s"<<endl;
    cout <<"To find the volume, press v"<<endl;
    cin >> temp;
    if (temp=="s")
    {
      cout << "Give me a length."<<endl;
      cin >> x;
      cout << "Give me a width."<<endl;
      cin >> y;
      cout << "Give me a height."<<endl;
      cin >> z;
      Box b1;
      b1.print();
      b1.setBox(x,y,z);
      b1.print();
      sleep(1);
      cout << "The surface area of the box is "<<b1.calcSurf()<<"."<<endl;
    } else if (temp=="v")
    {
      cout << "Give me a length."<<endl;
      cin >> x;
      cout << "Give me a width."<<endl;
      cin >> y;
      cout << "Give me a height."<<endl;
      cin >> z;
      Box b1;
      b1.print();
      b1.setBox(x,y,z);
      b1.print();
      sleep(1);
      cout << "The volume of the box is "<<b1.calcVol()<<"."<<endl;
    }
  } else if (temp =="2")
  {
    cout <<"To find the surface area, press s"<<endl;
    cout <<"To find the volume, press v"<<endl;
    cin >> temp;
    if (temp=="s")
    {
      cout << "Give me a length."<<endl;
      cin >> x;
      cout << "Give me a width."<<endl;
      cin >> y;
      cout << "Give me a height."<<endl;
      cin >> z;
      Pyramid p1;
      p1.print();
      p1.setBox(x,y,z);
      p1.print();
      sleep(1);
      cout << "The surface area of the pyramid is "<<p1.calcSurf()<<"."<<endl;
    } else if (temp=="v")
    {
      cout << "Give me a length."<<endl;
      cin >> x;
      cout << "Give me a width."<<endl;
      cin >> y;
      cout << "Give me a height."<<endl;
      cin >> z;
      Pyramid p1;
      p1.print();
      p1.setBox(x,y,z);
      p1.print();
      sleep(1);
      cout << "The volume of the pyramid is "<<p1.calcVol()<<"."<<endl;
    }
  } else if (temp =="3")
  {
    cout <<"To find the surface area, press s"<<endl;
    cout <<"To find the volume, press v"<<endl;
    cin >> temp;
    if (temp=="s")
    {
      cout << "Give me a radius."<<endl;
      cin >> x;
      Sphere s1;
      s1.print();
      s1.setBox(x);
      s1.print();
      sleep(1);
      cout << "The surface area of the sphere is "<<s1.calcSurf()<<"."<<endl;
    } else if (temp=="v")
    {
      cout << "Give me a length."<<endl;
      cin >> x;
      Pyramid s1;
      s1.print();
      s1.setBox(x,y,z);
      s1.print();
      sleep(1);
      cout << "The volume of the sphere is "<<s1.calcVol()<<"."<<endl;
    }
  }
  return 0;
}
