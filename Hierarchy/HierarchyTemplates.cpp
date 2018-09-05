#include <iostream>
using namespace std;

class factory{
public:
	template<class Prod>
	Prod* factoryMethod()
	{
		return new Prod;
	}
};

class ProductA : public factory{
public:
	void operation()
	{
		cout << "Estoy en el producto A" << endl;
	}
};


int main()
{
	factory* p = new factory;
	ProductA *a = p->factoryMethod<ProductA>();
	a->operation();
}