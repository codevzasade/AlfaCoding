#include "stdafx.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
const double eps = 1e-10;
int main()
{
	double x, a, y, s, p;
	int b, n;
	for (x = 0.1; x < 0.9; x += 0.1)
	{
		a = x; 
		p = x; // 1 elemnet ryada, p- elemt ryada
		s = x; // 1 elemnet ryada, s - summa ryada
		n = 1; // n dlya 2 elemta, and poton n++
		b = 0; // summa kolichesva shagov
		do
		{
				a = a*x*x; // rekyrentnii chislitel
				p = a / (2 * n + 1); // elemt
				s += p; // summa ryada
				n += 1;
				b += 1;
		} while (fabs(p) > eps); // poka elemt |p|>eps
		y = log((1 + x) / (1 - x));
		printf("x=%3.2f  S=%8.5f  y=%8.5f b=%d\n", x, s * 2, y, b);
	};
	getchar();
	return 0;
}