#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


const double eps = 1e-4;

double f(double x) {
	return 2 - sin(1/x);
}
double fi(double x){
	return cos(1/x)*(1/x*x);
}

int main() {
	double x, y, n, z, b;
	x = 2;
	n = 0;
	z = 1;
	b = 1;
	if (fi(x)<1)
	{
		while (z > eps)
		{
			y = f(x);
			z = fabs(y-x);
			x=y;
			n=n+1;
		}
	}
	printf("x=%f f(x)=%f n=%f",x,f(x),n);
	return 0;
}