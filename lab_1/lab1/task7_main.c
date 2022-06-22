#include "func.h"
#include <stdio.h>
#include <conio.h>

float x;
double result;

void f(void);

int main(void)
{
	printf("Enter x:\t"); 

	scanf_s("%f", &x); //считываем значение x

	printf("x= %.6g\n", x);

	f();

	printf("f= %.6g\n", result);

	_getch();
	return 0;
}