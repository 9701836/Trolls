#ifndef PYRAMIDTROLLS_H
#define PYRAMIDTROLLS_H

class Pyramid {
   private:
      double length;   
      double width;  
      double height; 
      double volume;
      double surface;
   public :
      Pyramid(const double l = 0, const double w = 0, const double h = 0);
      void setBox(const double l, const double w, const double h);
      double calcVol();
      double calcSurf();
      void print() const;
};
#endif
