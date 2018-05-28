#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include "Header.h"

void incrementHeapVariable()
{

	int *d = (int *)malloc(sizeof(int));
	printf("Задание 3\n");

	printf("Введите число ");
	scanf_s("%d", d);

	printf("Адрес = %p, Значение = %d \n", d, *d);
	increment(d);
	printf("Адрес = %p, Значение = %d \n", d, *d);
	free(d);
}