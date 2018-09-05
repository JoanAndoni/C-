#include "ColaTemplate.h"

int main()
{
	Cola<int> *integer = new Cola<int>();
	integer->enqueue(9);
	integer->enqueue(8);
	integer->enqueue(7);
	integer->enqueue(6);

	cout << "Cola integers " << endl;
	integer->print();
	cout << endl;

	Cola<string> *strings = new Cola<string>();
	strings->enqueue("Sproles");
	strings->enqueue("Tomlinson");
	strings->enqueue("McFadden");
	strings->enqueue("Kenny");

	cout << "Cola strings " << endl;
	strings->print();
	cout << endl;

	return 0;
}
