#include "stdafx.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
const double pi = 3.14;
const double eps = 1e-4;
double f(double x)
{
	return exp(x)*sin(x);
}
int main()
{
	double dx, left, a, b, s0, s2, s1, bl;
	int n, z, k; // n - kol.razb
	printf("Vvedite kolichwstvo razbienii:");
	scanf_s("%d", &n);
	a = 0; // pravaya granicha
	b = pi; // levaya granicha
	dx = (b - a) / n;
	s0 = 0; // nach znacjenie
	s1 = 0; // nach znacjenie
	left = ((f(a) + f(b))*0.5)*dx;
	for (z = 1; z <= n; z++)
	{
		s0 += (f(a + (z - 1)*dx))*dx;
	}
	s2 = left + s0;
	if (fabs(s2) < 1)
		k = 1;
	else
		k = 2;
	do
	{
		n = 2 * n;
		dx = (pi - a) / n; // new dx
		s1 = s2; // risvaevaem dlya sravneni
		s2 = 0; // obnulaem s2
		s0 = 0;
		for (z = 1; z <= n; z++)
		{
			s0 += (f(a + (z - 1)*dx))*dx;
		}
		s2 = left + s0;
		switch (k)
		{
		case 1: bl = (fabs((s2 - s1))>eps); break;
		case 2: bl = (fabs((s2 - s1) / s2)>eps); break;
		}
		printf("\t bl = %lf n=%d s2 = %lf s2-s1=%lf \t\n", bl, n, s2, s2 - s1);
	} while (bl);
	return 0;
}