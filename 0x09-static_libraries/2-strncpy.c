#include "main.h"
/**
 * _strncpy - to copy strings
 * @a: the address of source string
 * @b: the address of destination string
 * @n: the length of characters to be appended
 *
 * Return:the address of the concatenated string
 */
char *_strncpy(char *a, char *b, int n)
{
	int i, length;

	i = 0;
	length = 0;
	while (b[i++])
		length++;
	for (i = 0; b[i] && i < n; i++)
		a[i] = b[i];
	for (i = length; i < n; i++)
		a[i] = '\0';
	return (a);
}
