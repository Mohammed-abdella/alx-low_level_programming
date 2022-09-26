#include "main.h"
/**
 * _memset - to fill a memory area with constant byte
 * @a: the address of source character
 * @b: the constant byte to be filled
 * @n: the size of the memory to be filled
 *
 * Return: a pointer to the filled memory area
 */
char *_memset(char *a, char b, unsigned int n)
{
	unsigned int i;
	char *m;

	m = a;

	for (i = 0; i < n; i++)
		m[i] = b;
	return (m);
}
