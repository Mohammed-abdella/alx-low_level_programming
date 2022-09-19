#include "main.h"
/**
 * rev_string - to reverse a string permanently
 * @a: the address of the input
 */
void  rev_string(char *a)
{
	int n, i;
	char swap;

	n = 0;
	i = 0;
	while (a[i++])
	{
		n++;
	}
	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = swap;
	}
}
