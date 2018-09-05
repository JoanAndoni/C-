/*
   Polynomial class
   Inherits from a Linked List, using Terms as data

Name:Joan Andoni González Rioz
ID number: A00569929
*/

#include "LinkedList.h"
#include "Term.h"

class Polynomial : public LinkedList<Term> {
    public:
        // Method to compute the results of a polynomial evaluated
        //  with a given value for the variable
        double evaluate(double x);
        // Add up all the terms with equal exponents
        void simplify();
        // Optional: Change the method to insert in decreasing order
        //void insertOrdered(Term data);
        //void insertOrdered(Node<Term> * new_node);
        // Overload the operator to add two polynomials
        Polynomial operator+(const Polynomial & other);

        // Method to print out a polynomial
        friend std::ostream & operator<< (std::ostream & stream, const Polynomial & poly);
};


// Method to compute the results of a polynomial evaluated
//  with a given value for the variable
double Polynomial::evaluate(double x)
{
	//-evaluate: receives the value to be given to the variable X.Returns the numberical value of the evaluated polynomial.

    // Remember to indicate that the nodes used in this class contain Terms
    Node<Term> * item = head;
	Term * aux = 0, * aux2 = 0;
	double finalResult = 0, result = 1;

	while (item != nullptr)
	{
		* aux = item->getData();
		if (aux->getExponent() == aux2->getExponent())
			return 1;
		if (aux->getExponent() != aux2->getExponent())
		{
			for (int i = aux->getExponent(); i > 0; i--)
			{
				result *= aux->getConstant();
			}
		}
		finalResult += result;
		item = item->getNext();
	}
	return finalResult;
}

// Add up all the terms with equal exponents
void Polynomial::simplify()
{
	//- simplify: adds together the terms that have the same exponent. Does not receive or return anything, but should modify the list.
	Node<Term> * item = head;
	Node<Term> * item2 = head->getNext();
	Node<Term> * temporal = nullptr;
	Node<Term> * aux = nullptr;
	Term review = temporal->getData(), review2 = temporal->getData(), newOne = temporal->getData(), another = temporal->getData();
	double constant = 0;
	while (item != nullptr)
	{
		review = item->getData();
		while (item2 != nullptr)
		{
			review2 = item2->getData();
			if (temporal == nullptr)
			{
				if (review.getExponent() == review2.getExponent())
				{
					constant = constant + review.getConstant() + review2.getConstant();
					newOne.setConstant(constant);
					newOne.setExponent(review.getExponent());
				}
			}
			else if (temporal != nullptr)
			{
				another = temporal->getData();
				if (another.getExponent() == review.getExponent())
					break;
				else if (review.getExponent() == review2.getExponent())
				{
					constant = constant + review.getConstant() + review.getConstant();
					newOne.setConstant(constant);
					newOne.setExponent(review.getExponent());
				}
			}
			item2  = item2->getNext();
		}
		if (temporal == nullptr)
			temporal->setData(newOne);
		else
		{
			aux = temporal;
			
			temporal->setNext(aux);
			
		}
		item = item->getNext();
	}
	head = temporal;
}

// Optional: Change the method to insert in decreasing order
//void insertOrdered(Term data);
/*void Polynomial::insertOrdered(Node<Term> * new_node)
{
	//- simplify: adds together the terms that have the same exponent. Does not receive or return anything, but should modify the list.

}*/

// Overload the operator to add two polynomials
Polynomial Polynomial::operator+(const Polynomial & other)
{
	//- operator+: adds two polynomials together. It receives another polynomial as parameter, and returns a new polynomial. This will be easier if the polynomials are already ordered, in which case the logic is similar to the merge method in Merge Sort.
	Node<Term> * otherHead = other.head;
	Polynomial sum = * this;
	while (otherHead != nullptr)
	{
		sum.insertOrdered(otherHead->getData());
		otherHead = otherHead->getNext();
	}
	return sum;
}

// Method to print out a polynomial
std::ostream & operator<< (std::ostream & stream, const Polynomial & poly)
{
	//- operator<<: used to print the polynomial in a nice format.

	Node<Term> * item = poly.head;
	stream << " ";
	while (item != nullptr)
	{
		stream << item->getData();
		if (item->getNext() != nullptr)
		stream << " + ";
		else
		stream << " ";
		item = item->getNext();
	}
	stream << std::endl;
	return stream;
}