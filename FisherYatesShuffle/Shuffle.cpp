// MiscProblems.cpp : Defines the entry point for the application.
//

#include "Shuffle.h"
#include <time.h>

using namespace std;

/*
Write a C++ function that takes an array containing the set of all integers
in the range 1 to 52 and shuffles it into random order. Use the built-in function
rand, which returns a pseudo-random integer each time it is called.
Your function should output each possible order with equal probability.
*/

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Shuffle(int arr[] , int size)
{
	//To randomise the results. Called to produce different results when the program is run each time
	srand(time(NULL));

	for (int i = size-1; i > 0; i--)
	{
		//randomly select an index from 0 to i
		int j = rand() % (i + 1);

		swap(arr[i], arr[j]);
	}
}

void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arry[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int size = sizeof(arry) / sizeof(arry[0]);
	Shuffle(arry, size);
	PrintArray(arry, size);
	Shuffle(arry, size);
	PrintArray(arry, size);
	Shuffle(arry, size);
	PrintArray(arry, size);
	Shuffle(arry, size);
	PrintArray(arry, size);
	Shuffle(arry, size);
	PrintArray(arry, size);
}
