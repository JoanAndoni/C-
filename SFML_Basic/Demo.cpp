#include <iostream>
#include "FibonacciTree.h"

int main()
{
	FibonacciTree<int> Fib;
	Fib.set(6);
	Fib.printTree();
	Fib.main_Draw();

	return 0;
}