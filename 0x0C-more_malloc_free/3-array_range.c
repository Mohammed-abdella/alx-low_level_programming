#include "main.h"
#include <stdlib.h>
/**
 * array_range - to create array of integers
 * @a: the minimum integer
 * @b: the maximum integer
 * Return: a pointer to the newly created array
 */
int *array_range(int a, int b)
{
	int *ch, i, n;

	if (a > b)
		return (NULL);
	n = b - a + 1;
	ch = malloc(n * sizeof(int));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		ch[i] = a++;
	}
	return (ch);
}
