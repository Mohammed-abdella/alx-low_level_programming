#include "main.h"
#include <stdlib.h>
/**
 * _calloc - to allocate memory for array
 * @a: the number of elements in the array
 * @b: the number of bytes for each element
 * Return: a pointer to the newly created array
 */
void *_calloc(unsigned int a, unsigned int b)
{
	void *m;
	char *ch;
	unsigned int i;

	if (a == 0 || b == 0)
		return (NULL);
	m = malloc(a * b);
	if (m == NULL)
		return (NULL);
	ch = m;
	for (i = 0; i < (b * a); i++)
		ch[i] = '\0';
	return (m);
}
