#include "Mano.h"

    Mano::Mano()
    {
      indice = NULL;
      medio = NULL;
      soporte = NULL;
      palmaX = palmaY = 0;
    }

    Dedo* Mano::getIndice()
    {
       return indice;
    }

    void Mano::setIndice(Dedo *i)
    {
       indice = i;
    }

    Dedo* Mano::getMedio()
    {
       return medio;
    }

    void Mano::setMedio(Dedo *m)
    {
       medio = m;
    }

    Dedo* Mano::getSoporte()
    {
       return soporte;
    }

    void Mano::setSoporte(Dedo *s)
    {
       soporte = s;
    }


    int Mano::getPalmaX()
    {
       return palmaX;
    }

    void Mano::setPalmaX(int x)
    {
      palmaX = x;
    }

    int Mano::getPalmaY()
    { 
       return palmaY;
    }

    void Mano::setPalmaY(int y)
    {
       palmaY = y;
    }
