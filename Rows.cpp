#include "stdafx.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
int main()
{
	double x, a, S, y, b;
	int n;
	for (x = 0.1; x <= 0.9; x += 0.1)
	{
		a = x;
		S = x;
		for (n = 1; n <= 35; n++)
		{
				a = a*x*x;
				S = S + a/(2*n+1);
		}
		y = log((1+x)/(1-x));
		printf("x=%3.1f  S=%8.4f  y=%8.4f \n", x, S*2, y);
	};
	getchar();
	return 0;
}