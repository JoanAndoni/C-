#include "Cola.h"

Cola::Cola(){
}

void Cola::enqueue(int x)
{
	p.push_back(x);
}

int Cola::dequeue()
{
	int x = p[0];
	p.erase(p.begin());
	return x;
}

int Cola::front()
{
	return p[0];
}

bool Cola::isEmpty()
{
	if (p.size() == 0)
		return true;
	return false;
}

void Cola::print()
{
	for (int i = 0; i < p.size(); i++){
		cout << p[i] << "\t";
	}
        cout<<endl;
        cout<<"^"<<endl;
        cout<<"inicio"<<endl;
}
