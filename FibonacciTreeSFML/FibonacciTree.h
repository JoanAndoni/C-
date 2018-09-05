#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iomanip>
#include "TreeNode.h"


template <class T>
class FibonacciTree {
private:
	TreeNode<T> * root = nullptr;
	int indent_increase = 6;

public:
	FibonacciTree() {}
	void set(int number);
	TreeNode<T> * setRecursive(TreeNode<T> * _root, int num);
	void printTree();
	void recursivePrintTree(TreeNode<T> * _root, int indent, char branch);
	int evaluateFib(int n);
};


template <class T>
void FibonacciTree<T>::set(int number)
{
	root = setRecursive(root, number);
}

template <class T>
TreeNode<T> * FibonacciTree<T>::setRecursive(TreeNode<T> * _root, int num)
{
	TreeNode<T> * _node = new TreeNode<T>(evaluateFib(num));
	_root = _node;

	if (num > 1)
	{
		_root->setLeft(setRecursive(_root, num - 1));
		_root->setRight(setRecursive(_root, num - 2));
	}
	return _root;
}

template <class T>
void FibonacciTree<T>::printTree()
{
	std::cout << "Tree printed vertically:" << std::endl;
	recursivePrintTree(root, indent_increase, '-');
}

template <class T>
void FibonacciTree<T>::recursivePrintTree(TreeNode<T> * _root, int indent, char branch)
{
	if (_root)
	{
		recursivePrintTree(_root->getRight(), indent + indent_increase, '/');
		std::cout << std::setw(indent) << branch << " " << _root->getData() << std::endl;
		recursivePrintTree(_root->getLeft(), indent + indent_increase, '\\');
	}
}

template <class T>
int FibonacciTree<T>::evaluateFib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return (evaluateFib(n - 1) + evaluateFib(n - 2));
}

#endif