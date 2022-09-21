#include "main.h"
/**
 * reverse_array - to reverse a array
 * @a: the address of input array
 * @n: the length of the array
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
