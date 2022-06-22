#include <stdio.h>
#include <conio.h>

double f(double x);  //прототип на функцию f()

int main(void)
{
	double func;
	float x;

	printf("Enter x:\t"); 

	scanf_s("%d", &x); //считываем значение x

	printf("x= %d\n", x);

	func = f(x);//вызываем функцию
	
	printf("f= %.6g\n", func); 

	_getch();
	return 0;
}

double f(double x)
{
	double func;

	func = (5-2*x*x)/((1+x+x*x) / (2*x+x*x)+2 + (1-x-x*x)/(2*x-x*x)); //сама функция

	return func; //процедура возвращает значение функции
}
