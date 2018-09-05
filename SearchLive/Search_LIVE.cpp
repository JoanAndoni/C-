/*
Implementation of search algorithms on arrays
Gilberto Echeverria
*/

#include <iostream>
#include <cstdlib>      // Required to use the random functions
#include <ctime>        // Required to make use of time functions

#define MAX 1000
#define STEP 5

class Array {
private:
	int * data;
	int size;
public:
	// Class constructor
	Array(int _size);
	// Destructor
	~Array();
	void fill_random();
	void fill_ordered();
	void print_data();
	bool linear_search();
	bool binary_search_iterative();
	bool binary_search_recursive();
};

/*
Constructor
It creates the array of integers
*/
Array::Array(int _size)
{
	// Create the array of integers
	size = _size;
	data = new int[size];
	// Fill the array with data
	fill_random();
}

/*
Destructor
This one frees the memory used for the array
*/
Array::~Array()
{
	delete[] data;
}

void Array::fill_random()
{
	for (int i = 0; i<size; i++)
	{
		data[i] = rand() % MAX + 1;
	}
}

void Array::fill_ordered()
{
	int previous = 0;

	for (int i = 0; i<size; i++)
	{
		// Skip a few numbers after every element stored in the array
		data[i] = previous + (rand() % STEP + 1);
		previous = data[i];
	}
}

void Array::print_data()
{
	for (int i = 0; i<size; i++)
	{
		std::cout << " " << data[i];
	}
	std::cout << std::endl;
}

bool linear_search()
{
	
}

int main()
{
	// Initialize the random number seed
	srand(time(NULL));

	Array array_one(20);
	Array * array_two = new Array(30);

	std::cout << "Array one:" << std::endl;
	array_one.print_data();
	std::cout << "Array two:" << std::endl;
	array_two->print_data();

	// DO SOME TESTS OF LINEAR SEARCHING HERE

	array_one.fill_ordered();
	std::cout << "Array one:" << std::endl;
	array_one.print_data();
	array_two->fill_ordered();
	std::cout << "Array two:" << std::endl;
	array_two->print_data();

	// DO SOME TESTS OF LINEAR SEARCHING HERE

	delete array_two;

	return 0;
}