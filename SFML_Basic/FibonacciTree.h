/*
Joan Andoni González Rioz A00569929
Daniel Tapia Nava A0102
Edgar Santiago   A0102
*/


#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iomanip>
#include "TreeNode.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

template <class T>
class FibonacciTree {
private:
	TreeNode<T> * root = nullptr;
	int indent_increase = 6;
	sf::RenderWindow window;

public:
	sf::CircleShape circle;
	sf::Text title;
	sf::Font font;

	FibonacciTree() : window(sf::VideoMode(800, 600), "Fibonacci Tree"){ font.loadFromFile("Akashi.ttf"); setDraws(); }
	void set(int number);
	TreeNode<T> * setRecursive(TreeNode<T> * _root, int num);
	void printTree();
	void recursivePrintTree(TreeNode<T> * _root, int indent, char branch);
	int evaluateFib(int n);
	void SFML();
	void main_Draw();
	void setDraws();
	void recursiveSFML(TreeNode<T> * _root, int x, int y);
};

template<class T>
void FibonacciTree<T>::setDraws()
{
	circle.setRadius(10);
	circle.setPointCount(32);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineThickness(3.f);
	circle.setOutlineColor(sf::Color::Black);

	title.setFont(font);
	title.setCharacterSize(12);
	title.setColor(sf::Color::Black);
}

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

template <class T>
void FibonacciTree<T>::SFML()
{
	recursiveSFML(root, 350, 50);
}

template <class T>
void FibonacciTree<T>::main_Draw()
{
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear(sf::Color::White);
		SFML();
		window.display();
	}
}


template <class T>
void FibonacciTree<T>::recursiveSFML(TreeNode<T> * _root, int x, int y)
{
	if (_root != nullptr)
	{
		recursiveSFML(_root->getLeft(), x-100, y+100);
		circle.setPosition(x, y);
		title.setPosition(x + 22, y + 20);
		window.draw(circle);
		title.setString(std::to_string(_root->getData()));
		window.draw(title);
		recursiveSFML(_root->getRight(), x+100, y+100);
	}
}



#endif