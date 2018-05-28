#include <math.h>
#include "Header.h"
double a, f;
double summ2(double eps)
{
	a = eps + 1.0;
	f = 0.0;
	int i = 0;
	while (fabs(a) > eps)
	{
		a = pow(-1, i)*(1 / (2 *(i + 1)));
		f += a;
		++i;
	}
	return (f);
}