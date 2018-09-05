#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Cola {
private:
	vector <T> p;

public:
	Cola();

	void enqueue(T x);
	T dequeue();
	T front();
	bool isEmpty();

	void print();
};

template <class T>
Cola<T>::Cola()
{

}

template <class T>
void Cola<T>::enqueue(T x)
{
	p.push_back(x);
}

template <class T>
T Cola<T>::dequeue()
{
	T x = p[0];
	p.erase(p.begin());
	return x;
}

template <class T>
T Cola<T>::front()
{
	return p[0];
}

template <class T>
bool Cola<T>::isEmpty()
{
	if (p.size() == 0)
		return true;
	return false;
}

template <class T>
void Cola<T>::print()
{
	for (int i = 0; i < p.size(); i++){
		cout << p[i] << "\t";
	}
        cout<<endl;
        cout<<"^"<<endl;
        cout<<"inicio"<<endl;
}
