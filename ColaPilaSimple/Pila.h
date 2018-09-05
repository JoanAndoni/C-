#include <iostream>
#include <vector>

using namespace std;

class Pila {
private:
	vector <int> p;

public:
	Pila();

	void push(int x);
	int pop();
	int top();
	bool isEmpty();

	void print();
};