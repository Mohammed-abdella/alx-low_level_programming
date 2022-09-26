#include "main.h"
/**
 * _memcpy - to copy a memory area from source to destination
 * @a: the address of source memory
 * @b: the address of destination memory
 * @n: the size of the memory to be copied from source
 *
 * Return: a pointer to the destination memory area
 */
char *_memcpy(char *a, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		a[i] = b[i];
	return (a);
}
