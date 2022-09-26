#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - to print sum of diagonals of a two-d square array
 * @a: the address to the array
 * @b: the size of the array
 */
void print_diagsums(int *a, int b)
{
	int i, s1, s2;

	s1 = 0;
	s2 = 0;
	for (i = 0; i < b; i++)
	{
		s1 += a[i];
		a += b;
	}
	a -= b;
	for (i = 0; i < b; i++)
	{
		s2 += a[i];
		a -= b;
	}
	printf("%d, %d\n", s1, s2);
}
