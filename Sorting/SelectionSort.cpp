#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <math.h>
//#include <chrono> 

using namespace std;
//using namespace chrono;

int main() 
{
	int* array = new int[1000000];
	int n, c, d, min, loc, temp;

	cout << "Enter number of elements" << endl;
	cin >> n;
//	time_t start, end;

	cout << "The " << n << " integers will be generated automatically" << endl;

	for (c = 0; c < n; c++)
		array[c] = (rand() % 1000);       

//	time(&start); //START THE CLOCK
//	high_resolution_clock::time_point t1 = high_resolution_clock::now();//Start chrono
	clock_t cl = clock();

 	for(c=0; c<n-1; c++)
    {
        min=array[c];
        loc=c;
        for(d=c+1;d<n;d++)
        {
            if(min>array[d])
            {
                min=array[d];
                loc=d;
            }
        }
            
        temp=array[c];
        array[c]=array[loc];
        array[loc]=temp;
    }

//	high_resolution_clock::time_point t2 = high_resolution_clock::now();//Stop chrono
//	time(&end); // STOP THE CLOCK

/*	cout << "Sorted list in ascending order:\n";

	for (c = 0; c < n; c++)
		cout << array[c] << endl;
		*/

//	auto duration = duration_cast<seconds>(t2 - t1).count(); //Total time
//	double dif = difftime(end, start);

//	cout << "El tiempo de ejecucion fue de: " << duration << " milisegundos" << endl; //Doesnt work in raspberyPi cause libraries
//	cout << "El tiempo de ejecucion fue de: " << dif << " segundos" << endl;
	cout << "El tiempo de ejecucion fue de: " << (clock()-cl*1000/CLOCKS_PER_SEC) << " ms" << endl;

	return 0;
}