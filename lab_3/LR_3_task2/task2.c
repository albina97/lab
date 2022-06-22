#include <math.h>
#include <stdio.h>

double summ2(double eps)
{
	double a = 1.0 + eps;
	double value = 0.0;
	for (int i = 0; fabs(a) > 0; ++i)
	{
		a = pow(-1, i)*(1 / (2 *(i + 1)));
		value = value + a;
	}
	return(value);
}