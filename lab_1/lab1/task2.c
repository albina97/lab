#include <stdio.h>
#include <conio.h>

double f(double x)
{
	double func;

	func = (5-2*x*x)/((1+x+x*x) / (2*x+x*x)+2 + (1-x-x*x)/(2*x-x*x)); //���� �������

	return func; //��������� ���������� �������� �������
}

void main(void)
{
	float x;
	double func;

	printf("Enter x:\t"); 

	scanf_s("%f", &x); //��������� �������� x

	printf("x= %.6g\n", x);

	func = f(x); //�������� �������

	printf("f= %.6g\n", func);

	_getch();
	return 0;
}