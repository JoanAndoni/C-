#include "Enemigo.h"

class Hoyo : public Enemigo {
private:
	int diametro;

public:
	Hoyo();
	Hoyo(int x, int y, int d);

	int getDiametro();
	void setDiametro(int d);

	int danio();
};