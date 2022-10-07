#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - to allocate a memory
 * @a: the size of the memory to be allocated
 * Return: a pointer to the allocated memory or 98 if fails
 */
void *malloc_checked(unsigned int a)
{
	char *ch;

	ch = malloc(a);
	if (ch == NULL)
		exit(98);
	return (ch);
}
