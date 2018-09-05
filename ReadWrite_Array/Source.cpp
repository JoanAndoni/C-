#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void swap(string* item_1, string* item_2)
{
	string tmp;
	tmp = *item_1;
	*item_1 = *item_2;
	*item_2 = tmp;
}

void insertSort(string array[24][2], int order, string nombre)
{
	for (int i = 0; i < 24; i++)
	{
		for (int i2 = i; i2 > 0; i2--)
		{
			if (array[i2][order]<array[i2 - 1][order])
			{
				swap(array[i2][1], array[i2 - 1][1]);
				swap(array[i2][0], array[i2 - 1][0]);
			}
		}
	}
}

void search(string array[24][2], int order, string nombre)
{
	int helper = 0;
	for (int i = 0; i < 24; i++)
	{
		if (array[i][order] == nombre) {
			cout << endl << array[i][0] << " " << array[i][1] << " se ha encontrado en el index : " << i << endl;
			helper = 1;
		}
	}
	if (helper == 0) {
		cout << endl << "No se ha encontrado esta persona en el array" << endl;
	}

}

void read(string names[24][2])
{
	ifstream infile;
	infile.open("ASOIF_names.txt");
	for (int i = 0; i < 24; i++)
	{
		for (int i2 = 0; i2 < 2; i2++) infile >> names[i][i2];
	}
	infile.close();
}

int main()
{
	string names[24][2];
	string name2search;
	read(names);
	int option = 1;
	while (option != 0)
	{
		std::cout << "\nPlease choose one of the options below" << endl;
		std::cout << "Do you want to search by:" << endl << endl << "\t1.- Name" << endl << "\t2.- Last name" << endl << "\t3.- Print list" << endl << "\t0.- Exit" << endl;
		std::cout << endl <<"Select a option : ";
		std::cin >> option;
		switch (option)
		{
		case 1:
			cout << "Que nombre deseas buscar?" << endl;
			std::cin >> name2search;
			search(names, 0, name2search);
			break;

		case 2:
			cout << "Que nombre deseas buscar?" << endl;
			std::cin >> name2search;
			search(names, 1, name2search);
			break;

		case 3:
			cout << endl;
			for (int i = 0; i < 24; i++) {
				std::cout << i << ".- ";
				for (int i2 = 0; i2 < 2; i2++) {
					std::cout <<  names[i][i2] << " ";
				}
				std::cout << endl;
			}
			break;

		case 0:
			break;

		default:
			break;
		}
	}
	return 0;
}
