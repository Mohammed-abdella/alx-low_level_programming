#include "main.h"
/**
 * _strchr - to check occurence of a character in a string
 * @a: the address of source string
 * @b: the character to be checked
 *
 * Return: a pointer to the first occurence of b or NULL if not found
 */
char *_strchr(char *a, char b)
{
	int i;

	for (i = 0; a[i] >= '\0'; i++)
	{
		if (a[i] == b)
			return (a + i);
	}
	return ('\0');
}
