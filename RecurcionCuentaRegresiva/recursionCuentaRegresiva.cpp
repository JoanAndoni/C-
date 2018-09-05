#include <iostream>

using namespace std;

void cuentaRegresiva(int n)
{
	cout << "Entra a cuentaRegresiva el valor de n es: " << n << endl;
	if (n == 0)
	{
		cout << "Terminado el ciclo de cuentaRegresiva"<<endl;
		return;
	}
	else
		cuentaRegresiva(n - 1);
	cout << "Saliendo de cuentaRegresiva elvalor de n es: "<< n << endl;
}

int main()
{
	cout << "Entrando a main";
	cuentaRegresiva(3);

	int a;
	cin >> a;
	return 0;
}