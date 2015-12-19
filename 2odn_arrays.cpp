#include "stdafx.h"
#include "math.h"
#include "stdlib.h"
#include "time.h"
int main()
{
	const unsigned int N = 3, J = 4;
	unsigned int i, j, max, min, k, nmin; // sum1=chetnie_ch;sum2=nechetnie_ch;
	unsigned int massiv[N][J]; //zadaem massiv
	srand(time(0)); // inicializaciya rand; time = tekyshee kal-oe.time;
	/*Zapolnenie massiva*/
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < J; j++)
		{
			massiv[i][j] = rand() % 10 + 1;
			printf("massiv[%d][%d]=%d\t", i + 1, j + 1, massiv[i][j]);
		}
		printf("\n");
	}
	/*End*/
	/*Zadaem pervonochalnue max and min znach*/
	max = massiv[0][0];
	min = massiv[0][0];
	/*End*/
	/*Cicle sravnenia*/
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < J; j++)
		{
			if (massiv[i][j] > max)
			{
				max = massiv[i][j];
			}
			if (massiv[i][j] < min)
			{
				min = massiv[i][j];
			}
		}
	}
	/*End*/
	printf("\nOtvet: max-min=%d\t \n", max - min);
	getchar();
	return 0;
}