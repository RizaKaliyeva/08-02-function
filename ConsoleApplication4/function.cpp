#include <stdio.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <stdarg.h>

using namespace std;

unsigned i, j;

enum type_number  { positive,negative,all };

int happy(char * arr)
{
	int f, s;
	f = (int)arr[0] + (int)arr[1];
	s = (int)arr[2] + (int)arr[3];
	if (f == s)
		return 1;
	else
		return 0;
}

int numb(type_number tn, int start, int end)
{
	
	switch (tn)
	{
	case positive:
		return start + rand() % end;
		break;
	case negative:
		return start *(-1) + rand() % end;
		break;
	case all:
		return rand();
		break;
	}

}

void create(int *arr, int r, int start, int end, type_number tn)
{
	
	for (int i = 0; i < r; i++)
	{
		arr[i] = numb(tn, start, end);
	}
}

void sort_u(int *arr, int j)
{
	int prom;
	if (arr[j] > arr[j + 1])
	{
		prom = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = prom;
	}
}

void sort_d(int *arr, int j)
{
	int prom;
	if (arr[j] < arr[j + 1])
	{
		prom = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = prom;
	}
}

void sort(int*arr, int r,int n)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r - 1; j++)
		{
			if (n == 1)
				sort_u(arr, j);
			else
				sort_d(arr, j);
		}
	}
}

void print_arr(int *arr, int r)
{
	for (int i = 0; i < r; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void arr_d(int *arr, int  arr1[][4], int r)
{
	int m = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < 4; j++)
		{
			//*(*(arr1+i)+j) = *(arr+m);
			arr1[i][j] = arr[m];
			m++;
		}
	}
}

int sum(int r, ...)
{
	va_list 
}