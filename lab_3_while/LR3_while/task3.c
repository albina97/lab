#include <math.h>
#include <stdio.h>
#include "Header.h"
double a;
void print(int n, int k)
{
	int i = 0;
	while (i < n)
	{
		a = pow(-1, i)*(1 / (2 *(i + 1)));
		if ((i + 1) % k == 0)
		{
			++i;
			continue;
		}
		++i;
		printf("%.2lf\n", a);
	}
}