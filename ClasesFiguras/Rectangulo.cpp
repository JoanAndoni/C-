#include "Rectangulo.h"

   Rectangulo::Rectangulo()
   {
      ancho = 0;
      alto = 0;
      cout<<"Contructor rec1"<<endl;
   }

   Rectangulo::Rectangulo(int x, int y, int w, int h)
   {
      ancho = w;
      alto = h;
      centroX = x;
      centroY = y;
      cout<<"Contructor rec2"<<endl;
   }

   int Rectangulo::getAlto()
   {
      return alto;
   }
   void Rectangulo::setAlto(int h)
   {
      alto = h;
   }
  
   int Rectangulo::getAncho()
   {
      return ancho;
   }
   void Rectangulo::setAncho(int w)
   {
      ancho = w;
   }

   float Rectangulo::area() 
   {
       cout<<"Area del rectangulo"<<endl;
       return (alto*ancho);
   }
