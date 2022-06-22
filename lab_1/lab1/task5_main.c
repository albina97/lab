#include <stdio.h>
#include <conio.h>

double f(double x);  //прототип на функцию f()

int main(void)
{
	double func;
	float x;

	printf("Enter x:\t"); 

	scanf_s("%f", &x); //считываем значение x

	printf("x= %f\n", x);

	func = f(x);//вызываем функцию
	
	printf("f= %.6g\n", func); 

	_getch();
	return 0;
}