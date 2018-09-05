#include "Dedo.h"

class Mano {
  private:
    Dedo *indice;
    Dedo *medio;
    Dedo *soporte;
    int palmaX;
    int palmaY;

  public:
    Mano();

    Dedo* getIndice();
    void setIndice(Dedo *i);

    Dedo* getMedio();
    void setMedio(Dedo *m);

    Dedo* getSoporte();
    void setSoporte(Dedo *s);

    int getPalmaX();
    void setPalmaX(int x);

    int getPalmaY();
    void setPalmaY(int y);

};
