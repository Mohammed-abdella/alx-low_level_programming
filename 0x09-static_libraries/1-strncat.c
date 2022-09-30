#include "main.h"
/**
 * _strncat - to concatenate strings
 * @a: the address of source string
 * @b: the address of destination string
 * @n: the length of characters to be appended
 *
 * Return:the address of the concatenated string
 */
char *_strncat(char *a, char *b, int n)
{
	int i, length;

	i = 0;
	length = 0;
	while (a[i++])
		length++;
	for (i = 0; a[i] && i < n; i++)
		a[length++] = b[i];
	a[length++] = '\0';
	return (a);
}
