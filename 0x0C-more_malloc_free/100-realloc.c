#include "main.h"
#include <stdlib.h>

/**
 * _realloc - to reallocate memory using malloc and free
 * @a: pointer to already allocated memory
 * @b: the size of a
 * @c: the size for new memory to be reallocated
 * Return: a pointer to the reallcoated memory or NULL
 */
void *_realloc(void *a, unsigned int b, unsigned int c)
{
	void *m;
	char *ch, *ptr;
	unsigned int i;

	if (c == b)
		return (a);
	if (a == NULL)
	{
		m = malloc(c);
		if (m == NULL)
			return (NULL);
		return m;
	}
	if (c == 0 && a != NULL)
	{
		free(a);
		return (NULL);
	}
	ptr = a;
	m = malloc(sizeof(*ptr) * c);
	if (m == NULL)
	{
		free(a);
		return (NULL);
	}
	ch = m;
	for (i = 0; i < b && i < c; i++)
		ch[i] = *ptr++;
	free(a);
	return (m);
}
