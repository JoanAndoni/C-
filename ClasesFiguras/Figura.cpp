#include "Figura.h" 

Figura::Figura()
{
  centroX = 0;
  centroY = 0;
  cout<<"Constructor fig1"<<endl;
}

Figura::Figura(int x, int y)
{
  centroX = x;
  centroY = y;
  cout<<"Constructor fig2"<<endl;
}

int Figura::getCentroX()
{
   return centroX;
}

void Figura::setCentroX(int x)
{
  centroX = x;
}

int Figura::getCentroY()
{
   return centroY;
}

void Figura::setCentroY(int y)
{
  centroY = y;
}

float Figura::area()
{
}
