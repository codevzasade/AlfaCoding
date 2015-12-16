#include "stdafx.h"
#include "math.h"
#include "stdio.h"


int main()
{
	float a, vverx, b, dx, y;
	vverx = 0.9; // vverx granica
	b = 0.0873; // niz granica
	dx = 0.0873; // hag
	a = 1.9; // const
	for (b; b  < vverx; b += dx)
		{
		y = (b - a)*(b*b + 1)*sqrt(sin(a*b*b / (b+1)));
		printf("\t y = %f b = %f \n", y, b );
		}
	return 0;
}