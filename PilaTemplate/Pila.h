#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Pila {
private:
	vector <T> p;

public:
	Pila();

	void push(T x);
	T pop();
	T top();
	bool isEmpty();

	void print();
};

///////////////////////////////////////////////////////////////////////////////////// .CPP

template <class T>
Pila<T>::Pila(){
}

template <class T>
Pila<T>::push(T x)
{
	p.push_back(x);
}

template <class T>
Pila<T>::pop()
{
	int x = p[p.size() - 1];
	p.pop_back();
	return x;
}

template <class T>
Pila<T>::top()
{
	return p[p.size() - 1];
}

template <class T>
Pila<T>::isEmpty()
{
	if (p.size() == 0)
		return true;
	return false;
}

template <class T>
Pila<T>::print()
{
	cout << p[p.size() - 1] << "<- tope" << endl;
	for (int i = (p.size() - 2); i >= 0; i--)	{
		cout << p[i] << endl;
	}
}