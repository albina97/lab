#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include "Header.h"

void incrementHeapVariable()
{

	int *d = (int *)malloc(sizeof(int));
	printf("������� 3\n");

	printf("������� ����� ");
	scanf_s("%d", d);

	printf("����� = %p, �������� = %d \n", d, *d);
	increment(d);
	printf("����� = %p, �������� = %d \n", d, *d);
	free(d);
}