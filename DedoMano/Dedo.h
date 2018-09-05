#include <iostream>
#include <string>

using namespace std;

class Dedo {
  private:
    int largo;
    int x;
    int y;
    int z;

  public:

  Dedo();

  int getX();
  int getY();
  int getZ();
  int getLargo();

  void setX(int x);
  void setY(int y);
  void setZ(int z);
  void setLargo(int l);
};
