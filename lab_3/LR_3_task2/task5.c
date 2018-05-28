#include <math.h>
#include <stdio.h>

int findFirstNegativeElement(double eps)
{
	double a;
	for (int i = 0; ; ++i)
	{
		a = pow(-1, i)*(1 / (2 *(i + 1)));
		if (fabs(a) <= eps && a < 0.0)
		{
			return(i + 1);
		}
	}
}
