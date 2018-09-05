#include "Figura.h"

class Rectangulo : public Figura {
 private:
   int ancho;
   int alto;

 public:
   Rectangulo();
   Rectangulo(int x, int y, int w, int h);

   int getAlto();
   void setAlto(int h);
  
   int getAncho();
   void setAncho(int w);

   float area(); 
};
