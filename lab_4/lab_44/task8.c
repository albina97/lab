#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Header.h"

void sortHeapArray(int *arr, int n)
{
	n = 0;
	printf("¬ведите размер массива: ");
	scanf_s("%d", &n);
	arr = (int *)malloc(n *sizeof(int));
	writeArray(arr, n);
	//readArray(arr, n);
	
	sort(arr, n);
	printf("\n");
	readArray(arr, n);
	free(arr);
}