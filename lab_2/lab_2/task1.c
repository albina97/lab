#include <stdio.h>
#include <conio.h>
#include <math.h>

int isInArea(double x, double y)
{
	if (sqrt(x*x+y*y)<=1 &&!(x>-1 && x<0 && y<-1 && y<0)) //условие попадания в область
		return 1;
	else 
		return 0;
}

double f(double x) 
{
	if (x>3.6)
		return (45*x*x+5);
	if (x<=3.6)
		return (5*x/(10*x*x+1));
}

void main(void)
{
	float x, y;
	int z;

	printf("vvedite nomer zadaniya:\n"); 

	//scanf_s("%f", &z); //считываем номер задания

	switch (_getch()) { 
	case '1':
		printf("zadanie 1\n");
		printf("vvedite x:\n"); 
		scanf_s("%f", &x);

		printf("vvedite y:\n"); 
		scanf_s("%f", &y);

		z = isInArea(x, y);
		printf("rez: %d\n", z);
		break;

	case '2':
		printf("zadanie 2\n");
		printf("vvedite x:\n"); 
		scanf_s("%f", &x); 

		z = f(x);
		printf("rez: %d\n", z);
		break;

	default:
		printf("Error"); 
		break;
	}

	_getch();
}