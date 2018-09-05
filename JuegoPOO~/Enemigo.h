#ifndef ENE
#define ENE

#include <iostream>

using namespace std;

class Enemigo {
protected:
	int coordX;
	int coordY;

public:
	Enemigo();
	Enemigo(int x, int y);

	int getCoordX();
	void setCoordX(int x);

	int getCoordY();
	void setCoordY(int y);

	virtual int danio();
};

#endif