/*
	Name: Joan Andoni González Rioz
	ID: A00569929
    
	Simple linked list that stores integers
    
    Gilberto Echeverria
    gilecheverria@yahoo.com

	- insertOrdered: receives a new data item. It must be inserted in the correct position in the list, considering it is already ordered. Returns nothing.

	- recursiveSearch: receives the data we are looking for in the list. Returns the position of the data if found, starting with index 0. If not found, returns -1

*/

#include <iostream>
#include "Node.h"

class LinkedList {
    private:
        Node * head = nullptr;
		Node * item = nullptr;
        //Node * tail = nullptr;
        int length = 0;
		int count = 0;
        
        void print_recursive(Node * _head);
    public:
        LinkedList () {}
        LinkedList (Node * first) { head = first; }
        ~LinkedList ();
        // Insertion
        void insertHead (int data);
        void insertHead (Node * new_node);
        void insertTail (int data);
        void insertTail (Node * new_node);
        void insertAtPosition (int data, int position);
        void insertAtPosition (Node * new_node, int position);
		void insertOrdered(int data);
		void insertOrdered(Node *new_node);
        // Deletion
        Node * deleteHead();
        Node * deleteTail();
        Node * deleteFromPosition(int position);
        Node * deleteElement(int data);
        // Search
        int searchIterative (int data);
		int searchRecusiveParameters(int data, int counter, Node * item);
		int searchRecusive(int data);
        // Helper methods
		int getCount(){ return count; }
		Node * getHead(){ return head; }
        void clear();
        void printList();
        void print();
        friend std::ostream & operator<< (std::ostream & stream, const LinkedList & list);
};