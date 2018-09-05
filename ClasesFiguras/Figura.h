#ifndef FIG
#define FIG

#include <iostream>

using namespace std;

class Figura {
  protected:
    int centroX;
    int centroY;

  public:
    Figura();

    Figura(int x, int y);

    int getCentroX();
    void setCentroX(int x);

    int getCentroY();
    void setCentroY(int y);

    float area();
};

#endif 
