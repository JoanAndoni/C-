#include <iostream>
#include <vector>

using namespace std;

class Cola {
private:
	vector <int> p;

public:
	Cola();

	void enqueue(int x);
	int dequeue();
	int front();
	bool isEmpty();

	void print();
};
