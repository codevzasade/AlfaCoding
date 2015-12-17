#include "stdafx.h"
#include "math.h"
#include "stdlib.h"
#include "time.h"
int main()
{
	const unsigned int N=5;
	unsigned int a, b, i, sum1, sum2; // sum1=chetnie_ch;sum2=nechetnie_ch;
	unsigned int massiv[N]; //zadaem massiv
	srand(time(0)); // inicializaciya rand; time = tekyshee kal-oe.time; 
	sum1 = 0; // 0 y time start tochka dlya posledovatelnosti;
	sum2 = 0;
	for (i = 0; i < N; i++)
	{
		massiv[i] = rand() % 10 + 1; // prisv rand chislo ot 1 do 10;
		printf("\n massiv[%d]=%d\t", i, massiv[i]);
		if (massiv[i] / 2 * 2 == massiv[i]) // chislo delit na 2 and polushaem cheloe chislo t.k type "INT";
			sum1 += massiv[i];
		else
			sum2 += massiv[i];
	}
	printf("\n\n SUMMA: Chetnie=%d \n\tNechetnie=%d\n", sum1, sum2);
	getchar();
	return 0;
}
