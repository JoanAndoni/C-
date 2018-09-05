#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int busquedaRecursiva(vector <string> datos, string x, int min, int max)
{
	if (max <= min) return -1;
	else {
		int med = (min + max) / 2;
		//cout << "Valor de med en la busqueda recursiva : " << med << endl;
		if (datos[med] > x) return busquedaRecursiva(datos, x, min, med - 1);
		else if (datos[med] < x) return busquedaRecursiva(datos, x, med + 1, max);
		else return med;
	}
}

int busquedaBinaria(vector <string> datos, string x)
{
	int min = 0, med, max = datos.size() - 1;

	while (min <= max)
	{
		med = ((min + max) / 2);
		//cout << "Valor de med en la busqueda recursiva : " << med << endl;
		if (datos[med] == x) return med;
		if (datos[med] < x) min = med + 1;
		else
			max = med - 1;
	}
	return -1;
}

int main()
{
	vector <string> nombres;
	string x = "Aaron";
	int max, min;

	nombres.push_back("Aaron");//*// Problemas con los valores por el redondeo
	nombres.push_back("Bonifacio");
	nombres.push_back("Cayetano");
	nombres.push_back("Dorian");//*// Problemas con los valores por el redondeo
	nombres.push_back("Ezra");
	nombres.push_back("Fantino");//*// Problemas con los valores por el redondeo
	nombres.push_back("Gal");
	nombres.push_back("Haroldo");
	nombres.push_back("Isela");//*// //*// Problemas con los valores por el redondeo en los dos casos
	nombres.push_back("Julian");

	max = (nombres.size() - 1);

	cout << "Este es el index del nombre que buscaste con Busqueda Binaria Recursiva: " << busquedaRecursiva(nombres, x, 0, max) << endl;
	cout << "Este es el index del nombre que buscaste con Busqueda Binaria: " << busquedaBinaria(nombres, x) << endl;

	return 0;
}
