// MiscProblems.cpp : Defines the entry point for the application.
//

#include "GCD.h"

using namespace std;

/*
The greatest common divisor, or GCD, of two positive integers n and m is
the largest number j, such that n and m are both multiples of j. Euclid proposed
a simple algorithm for computing GCD(n,m), where n > m, which
is based on a concept known as the Chinese Remainder Theorem. The
main idea of the algorithm is to repeatedly perform modulo computations
of consecutive pairs of the sequence that starts (n,m, . . .), until reaching
zero. The last nonzero number in this sequence is the GCD of n and m.
For example, for n = 80,844 and m = 25,320, the sequence is as follows:
80,844 mod 25,320 = 4,884
25,320 mod 4,884 = 900
4,884 mod 900 = 384
900 mod 384 = 132
384 mod 132 = 120
132 mod 120 = 12
120 mod 12 = 0
So, GCD of 80,844 and 25,320 is 12. Write a short C++ function to
compute GCD(n,m) for two integers n and m.
*/

//function to compute gcd
int  ComputeGCD(int first, int second)
{
	int m, n;
	if (first >= second)
	{
		m = first;
		n = second;
	}
	else
	{
		m = second;
		n = first;
	}

	while ( m % n != 0)
	{
		auto temp = m;
		m = n;
		n = temp % n;
	}
	return n;
}

//function to compute gcd of an array of elements
int ComputeGCDArray(int a[], int size)
{
	int gcd = a[0];
	for (int i = 1; i < size; i++)
	{
		gcd = ComputeGCD(gcd, a[i]);
		if (gcd == 1)
			return 1;
	}
	return gcd;
}

int main()
{
	int arr[] = { 80844, 25320, 4884, 900, 384, 132, 8 };
	cout << ComputeGCDArray(arr, 7) << endl;
}
