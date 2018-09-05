#include<iostream>
using namespace std;

template <class T>
class IntIterator;

template <class T>
class IntCollection
{
protected:
	T *array;
	T size;
	int cont = 0;
public:
	friend class IntIterator<T>;
	IntCollection()
	{
		size = 10;
		array = new T [size];
	}
	IntIterator<T>* getIterator();
	void add(T  element)
	{
		if (cont <= size)
			array[cont++] = element;
		else
			cout << "ya no hay espacio para agregar" << endl;
	}
	int at(T  pos)
	{
		return array[pos];
	}
};

typedef int(*Function)(int, int);


int(*return_function(char f))(int, int)
{

}


template <class T>
class IntIterator
{
protected:
	IntCollection<T> coll;
	int cont = 0;
public:
	IntIterator(const IntCollection<T>& coll) : coll(coll){}
	bool hasNext()
	{
		if (cont < coll.cont)
			return true;
		return false;
	}

	int next()
	{
		return coll.at(cont++);
	}
};


template <class T>
IntIterator<T>* IntCollection<T>::getIterator()
{
	return new IntIterator<T>(*this);
}

int main()
{
	IntCollection<int> i;
	i.add(1);
	i.add(4);
	i.add(2);
	i.add(3);
	IntIterator<int>* it = i.getIterator();
	while (it->hasNext())
		cout << it->next() << endl;
	delete it;
}