#include "Circulo.h"

   Circulo::Circulo()
   {
     radio = 0;
     cout<<"Constructor cir1"<<endl;
   }

   Circulo::Circulo(int x, int y, int r)
   {
     centroX = x;
     centroY = y;
     radio = r;
     cout<<"Constructor cir2"<<endl;
   }

   int Circulo::getRadio()
   {
      return radio;
   }
 
   void Circulo::setRadio(int r)
   {
     radio = r;
   }
  
   float Circulo::area() 
   {
      cout<<"Area del circulo"<<endl;
      return (3.14f * radio);
   }
