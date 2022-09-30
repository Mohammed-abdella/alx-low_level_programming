#include "main.h"
/**
 * _strcat - to concatenate strings
 * @a: the address of source string
 * @b: the address of destination string
 *
 * Return:the address of the concatenated string
 */
char *_strcat(char *a, char *b)
{
	int i, length;

	i = 0;
	length = 0;
	while (a[i++])
		length++;
	for (i = 0; a[i]; i++)
		a[length++] = b[i];
	a[length++] = '\0';
	return (a);
}
