#include "stdafx.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
const double eps = 1e-10;
int main()
{
	double x, a, S, y, b, s1, n;
	for (x = 0.14; x <= 0.5; x += 0.1)
	{
		b = 1;
		a = x;
		S = x;
		do
		{
			b += 1;
			for (n = 1; n <= b+1; n++)
			{
				a = a*x*x;
				S += a / (2 * n + 1);
			}
			s1 = a / (2 * b + 1);
		} while (s1 > eps);
		y = log((1 + x) / (1 - x));
		printf("x=%3.2f  S=%8.5f  y=%8.5f \n", x, S*2, y);
	};
	getchar();
	return 0;
}