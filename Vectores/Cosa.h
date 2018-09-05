#include <string>

using namespace std;

class Cosa {
  private:
    string nombre;
    int talla;

  public:
    Cosa();
    string getNombre();
    void setNombre(string n);
    int getTalla();
    void setTalla(int t);
};
