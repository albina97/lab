#include <stdio.h>
#include <conio.h>

double f(double x);  //�������� �� ������� f()

int main(void)
{
	double func;
	float x;

	printf("Enter x:\t"); 

	scanf_s("%d", &x); //��������� �������� x

	printf("x= %d\n", x);

	func = f(x);//�������� �������
	
	printf("f= %.6g\n", func); 

	_getch();
	return 0;
}

double f(double x)
{
	double func;

	func = (5-2*x*x)/((1+x+x*x) / (2*x+x*x)+2 + (1-x-x*x)/(2*x-x*x)); //���� �������

	return func; //��������� ���������� �������� �������
}
