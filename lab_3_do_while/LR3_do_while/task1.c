#include <math.h>
#include "Header.h"

double a, f;
double summ(int n)
{

	f = 0.0;
	int i = 0;

	do
	{
		a = pow(-1, i)*(1 / (2 *(i + 1)));
		f += a;
		++i;
	} while (i < n);
	return f;
}