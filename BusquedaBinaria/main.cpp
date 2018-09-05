#include <iostream>
#define NumArray 10

using namespace std;

int busquedaBinariaRecursiva(int datos[], int x, int min, int max)
{
	if (max <= min) return -1;
	else {
		int med = (min + max) / 2;
		if (datos[med] > x) return busquedaBinariaRecursiva(datos, x, min, med - 1);
		else if (datos[med] < x) return busquedaBinariaRecursiva(datos, x, med + 1, max);
		else return med;
	}
}

int busqueda_binaria(int datos[], int x)
{
	int min = 0, max = 10, med;

	while (min <= max)
	{
		med = (min + max) / 2;
		if (datos[med] == x) return med;
		if (datos[med] < x) min = med + 1;
		else
			max = med - 1;
	}
	return -1;
}


int main()
{
	int array[10] = {5,8,13,14,19,21,28,33,38,43};
	int x;

	cout << "Que numero deseas buscar" << endl;
	cin >> x;

	//int indexEncontrado = busqueda_binaria(array, x);
	int indexEncontrado = busquedaBinariaRecursiva(array, x, 0, NumArray - 1);

	cout << "Este es el index del numero que buscaste : " << indexEncontrado << endl;

	return 0;
}