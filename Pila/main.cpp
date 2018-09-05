#include <iostream>
#include <vector>
#include "pila.h"

using namespace std;

int main()
{
	vector <int> ejemp;
	Pila ejemplo(ejemp);
	bool empty;

	ejemplo.push(1);
	ejemplo.push(2);
	ejemplo.push(3);
	ejemplo.push(4);

	empty = ejemplo.isEmpty();
	
	cout << "The pile is : " << empty << "\n" << endl;

	cout << "Last number : " << ejemplo.top() << "\n" << endl;

	ejemplo.print();

	ejemplo.pop();
	ejemplo.pop();
	ejemplo.pop();
	ejemplo.pop();

	empty = ejemplo.isEmpty();

	cout << "The pile is : " << empty << "\n" << endl;

	return 0;
}