/*
	Name: Joan Andoni González Rioz
	ID: A00569929

Simple program to test the functionality of our linked list

Gilberto Echeverria
gilecheverria@yahoo.com
*/

#include <iostream>
#include "LinkedList.h"

int main()
{
    LinkedList numbers;

    Node * item = nullptr;
    
    item = new Node(13);
    numbers.insertHead(item);
    
    numbers.insertTail(8);
    numbers.insertHead(4);
    numbers.insertHead(2);

    numbers.printList();
    
    numbers.insertAtPosition(5, 2);

    std::cout << "This is the list: " << numbers << std::endl;
    
    std::cout << "Printing recursively: " << std::endl;
    numbers.print();
    
    int num_search = 5;
    std::cout << "Iterative search for " << num_search << ": " << numbers.searchIterative(num_search) << std::endl;
    num_search = 9;
    std::cout << "Iterative search for " << num_search << ": " << numbers.searchIterative(num_search) << std::endl;


	//Recursive Search
	num_search = 5;
	std::cout << "Recursive Parameters search for " << num_search << ": " << numbers.searchRecusiveParameters(num_search, 0, numbers.getHead()) << std::endl;

	num_search = 5;
	std::cout << "Recursive search for " << num_search << ": " << numbers.searchRecusive(num_search) << std::endl;
    
    item = numbers.deleteHead();
    std::cout << "Just removed: " << item->getData() << std::endl;
    delete item;
    item = numbers.deleteTail();
    std::cout << "Just removed: " << item->getData() << std::endl;
    delete item;
    
    std::cout << "This is the list: " << numbers << std::endl;

	LinkedList order;
	order.insertOrdered(5);
	order.insertOrdered(2);
	order.insertOrdered(3);
	order.insertOrdered(1);
	order.insertOrdered(4);
	order.insertOrdered(6);
	order.insertOrdered(8);
	order.insertOrdered(7);
	std::cout << "This is the ordered list: \n" << std::endl;
	order.printList();
    
    return 0;
}