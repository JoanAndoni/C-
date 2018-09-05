#include "Juego.h"


/*
void iniciarHoyo(int* diametro, int* ranXH, int* ranYH)
{
	int ranDiametro;
	ranDiametro = (rand() % 2) + 1;
	*ranXH = rand() % 11;
	*ranYH = rand() % 11;
	if (ranDiametro == 1) *diametro = 5;
	if (ranDiametro == 2) *diametro = 10;
}
*/

/*
void iniciarMonstruo(int* tipo, int* ranXM, int* ranYM)
{
	*tipo = (rand() % 3) + 1;
	*ranXM = rand() % 11;
	*ranYM = rand() % 11;
}
*/

Juego::Juego(Jugador *jugador, vector <Hoyo> hoyos, vector <Monstruo> monstruos)
{
	string nombre;
	Jugador P1;
	cout << "Como te llamas? : " << endl;
	cin >> nombre;
	P1.setNombre(nombre);
	P1.setPosX(0);
	P1.setPosY(0);

	//Inicializacion del Hoyo
	int diametro, ranDiametro, ranXH, ranYH;
	//iniciarHoyo(diametro, ranXH, ranYH);
	ranDiametro = (rand() % 2) + 1;
	ranXH = rand() % 11;
	ranYH = rand() % 11;
	if (ranDiametro == 1) diametro = 5;
	if (ranDiametro == 2) diametro = 10;
	Hoyo uno;
	uno.setCoordX(ranXH);
	uno.setCoordY(ranYH);
	uno.setDiametro(diametro);
	hoyos.push_back(uno);

	//Inicialización del Monstruo
	int tipo, ranXM, ranYM;
	//iniciarMonstruo(tipo , ranXM , ranYM);
	tipo = (rand() % 3) + 1;
	ranXM = rand() % 11;
	ranYM = rand() % 11;
	Monstruo dos;
	dos.setCoordX(ranXM);
	dos.setCoordY(ranYM);
	dos.setTipo(tipo);
	monstruos.push_back(dos);
}

void Juego::fillGrind()
{

}