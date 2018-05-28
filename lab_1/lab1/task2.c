#include <stdio.h>
#include <conio.h>

double f(double x)
{
	double func;

	func = (5-2*x*x)/((1+x+x*x) / (2*x+x*x)+2 + (1-x-x*x)/(2*x-x*x)); //сама функция

	return func; //процедура возвращает значение функции
}

void main(void)
{
	float x;
	double func;

	printf("Enter x:\t"); 

	scanf_s("%f", &x); //считываем значение x

	printf("x= %.6g\n", x);

	func = f(x); //вызываем функцию

	printf("f= %.6g\n", func);

	_getch();
	return 0;
}