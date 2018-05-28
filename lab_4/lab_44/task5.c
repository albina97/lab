#include <stdio.h>
#include <conio.h>

void readArray(int *arr, int n)
{
	int i; 
	for (i = 0; i < n; i++)
	{
		printf("arr[%d]=%d\n", i + 1, arr[i]);
	}
}