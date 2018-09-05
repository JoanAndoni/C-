#include <iostream>
#include "Hoyo.h"
#include "Monstruo.h"

using namespace std;

class Jugador {
protected:
	string nombre;
	int posX;
	int posY;
	int vida;

public:
	Jugador();

	Jugador(string nombre, int posX, int posY, int vida);

	string getNombre();
	void setNombre(string n);

	int getPosX();
	void setPosX(int x);

	int getPosY();
	void setPosY(int y);

	int getVida();
	void setVida(int v);
};