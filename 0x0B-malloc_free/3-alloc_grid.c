#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - to concatenate two strings on a newly allocated memory
 * @a: the width of the two-d array
 * @b: the height of the two-d array
 * Return: a pointer to the two-d array or NULL
 */
int **alloc_grid(int a, int b)
{
	int i, j, **td;

	if (a <= 0 || b <= 0)
		return (NULL);
	td = malloc(sizeof(int *) * b);
	if (td == NULL)
		return (NULL);

	for (i = 0; i < b; i++)
	{
		td[i] = malloc(sizeof(int) * a);
		if (td[i] == NULL)
		{
			for (; i >= 0; i--)
				free(td[i]);
			free(td);
			return (NULL);
		}
	}
	for (i = 0; i < b; i++)
	{
		for (j = 0; j < a; j++)
			td[i][j] = 0;
	}
	return (td);
}
