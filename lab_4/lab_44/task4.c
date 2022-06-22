#include <stdio.h>
#include <conio.h>

void writeArray(int *arr, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("arr[%d]=", i + 1);
		scanf_s("%d", &arr[i]);
	}
}