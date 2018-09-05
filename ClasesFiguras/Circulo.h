#include "Figura.h"

class Circulo : public Figura {
 private:
   int radio;

 public:
   Circulo();
   Circulo(int x, int y, int r);

   int getRadio();
   void setRadio(int r);
  
   float area(); 
};
