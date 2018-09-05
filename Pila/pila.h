#include <iostream>
#include <vector>

using namespace std;

class Pila {
private:
	vector <int> num;

public:
	Pila(vector <int> num);
	void push(int n);
	void pop();
	int top();
	bool isEmpty();
	void print();
};