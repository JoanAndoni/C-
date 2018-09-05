#include "Enemigo.h"

class Monstruo : public Enemigo {
private:
	int tipo;
public:
	Monstruo();
	Monstruo(int x, int y, int t);

	int getTipo();
	void setTipo(int t);

	int danio();
};