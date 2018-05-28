#include <math.h>
#include "Header.h"
double a;

int findFirstNegativeElement(double eps)
{
	int i = 0;
	while (i > -1)
	{
		a = pow(-1, i)*(1 / (2 *(i + 1)));
		if (fabs(a) <= eps && a < 0.0)
		{
			return(i + 1);
		}
		++i;
	}
}