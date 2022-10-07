#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - to concatenate two strings with fixed size
 * @a: the pointer to the first string to be concatenated
 * @b: the pointer to the second string to be concatenated
 * @c: the number of bytes to be concatenated from the second string
 * Return: a pointer to the allocated memory containing the new string
 */
char *string_nconcat(char *a, char *b, unsigned int c)
{
	char *ch;
	unsigned int n = c, i;

	if (a == NULL)
		a = "";
	if (b == NULL)
		b = "";
	for (i = 0; a[i]; i++)
		n++;
	ch = malloc(sizeof(char) * (n + 1));
	if (ch == NULL)
		return (NULL);
	n = 0;
	for (i = 0; a[i]; i++)
		ch[n++] = a[i];
	for (i = 0; b[i] && i < c; i++)
		ch[n++] = b[i];
	ch[n] = '\0';
	return (ch);
}
