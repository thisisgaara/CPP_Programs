#include "stdafx.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
using namespace std;

void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
void bubble_sort(int a[], int len)
{
	int i, j, k, iter = 1;
	for (i = 0; i < len -1 ; i++)
	{
		iter = 0;
		for (j = 0; j < len -1 ; j++)
		{
			if (a[j] > a[j + 1])
			{
				iter = 1;
				swap((a + j), (a + j + 1));
			}
		}	
		if (iter == 0)
			break;
	}
}

int main()
{
	const int size(9);
	int array[size] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
	bubble_sort(array, sizeof(array)/sizeof(int));
	cout << "Sorting done" << endl;
	return 0;
}
