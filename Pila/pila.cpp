#include "pila.h"
#include <vector>

Pila::Pila(vector <int> num)
{
	//num = num;
}

void Pila::push(int n)
{
	num.push_back(n);
}

void Pila::pop()
{
	num.pop_back();
}

int Pila::top()
{
	int numDatos = num.size()-1;
	return num[numDatos];
}

bool Pila::isEmpty()
{
	bool a;
	int things = num.size();
	if (things == 0) return true;
	if (things != 0) return false;
}

void Pila::print()
{
	for (int i = 0; i < num.size(); i++)
	{
		cout << i << ": " << num[i] << endl;
	}
	cout << endl;
}