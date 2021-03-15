#ifndef BOXTROLLS_H
#define BOXTROLLS_H

class Box {
   private:
      float length;   
      float width;  
      float height; 
      float volume;
      float surface;
   public :
      Box(const float l = 0, const float w = 0, const float h = 0);
      void setBox(const float l, const float w, const float h);
      float calcVol();
      float calcSurf();
      void print() const;
};
#endif
