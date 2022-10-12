#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - to call a function for every element of an array
 * @a: a pointer to the input array
 * @n: the size of the input array
 * @c: a pointer to the function to be used
*/
void array_iterator(int *a, size_t n, void (*c)(int))
{
	unsigned int i;

	for (i = 0; i < n; i++)
		c(a[i]);
}
