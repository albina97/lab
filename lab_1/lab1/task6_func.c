#include <stdio.h>
#include <conio.h>

float x;
double result;

void f(void)
{
	result = (5-2*x*x)/((1+x+x*x) / (2*x+x*x)+2 + (1-x-x*x)/(2*x-x*x)); //сама функция
}