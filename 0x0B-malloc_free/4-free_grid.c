#include "main.h"
#include <stdlib.h>
/**
 * free_grid - to free memory of a two-d array
 * @a: the pointer to the two-d array
 * @b: the size of the array (height)
 */
void free_grid(int **a, int b)
{
	int i;

	for (i = 0; i < b; i++)
		free(a[i]);
	free(a);
}
