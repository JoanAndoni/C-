#include "Dedo.h"

  Dedo::Dedo()
  {
     x = y = z = 0;
     largo = 1;   
  }

  int Dedo::getX()
  {
    return x;
  }

  int Dedo::getY()
  {
    return y;
  }

  int Dedo::getZ()
  {
    return z;
  }

  int Dedo::getLargo()
  {
    return largo;
  }


  void Dedo::setX(int x)
  {
    this->x = x;
  }

  void Dedo::setY(int y)
  {
    this->y = y;
  }

  void Dedo::setZ(int z)
  {
    this->z = z;
  }

  void Dedo::setLargo(int l)
  {
     largo = l;
  }
