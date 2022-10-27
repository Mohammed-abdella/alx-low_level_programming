#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - to convert binary no to unsigned int
 * @b: a pointer to the string of 0s and 1s (binary)
 * Return: the converted number or 0 if invalid
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, m = 1;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i];)
		i++;
	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n += (b[i] - '0') * m;
		m *= 2;
	}
	return (n);
}
