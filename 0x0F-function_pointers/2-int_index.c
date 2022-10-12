#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - to search an element from an array
 * @a: a pointer to the input array
 * @n: the size of the input array
 * @c: a pointer to the function to be used for search
 * Return: an index if found or -1 if not found
*/
int int_index(int *a, int n, int (*c)(int))
{
	int i, r;

	if (n <= 0)
		return (-1);
	if (a == NULL || c == NULL)
		return (-1);
	for (i = 0; i < n; i++)
	{
		r = c(a[i]);
		if (r != 0)
			return (i);
	}
	return (-1);
}
