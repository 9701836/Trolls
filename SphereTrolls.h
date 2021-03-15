#ifndef SPHERETROLLS_H
#define SPHERETROLLS_H

class Sphere {
   private:
      double radius;   
   public :
      Sphere(const double l = 0);
      void setBox(const double l);
      double calcVol();
      double calcSurf();
      void print() const;
};
#endif
