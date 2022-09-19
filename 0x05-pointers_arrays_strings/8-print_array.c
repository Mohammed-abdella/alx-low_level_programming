#include "main.h"
#include <stdio.h>
/**
 * print_array - to print elements of an array
 * @a: the address of the input array
 * @n: the size of the array
 */
void  print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
	printf("\n");
}
