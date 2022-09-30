#include "main.h"
/**
 * _strstr - to check occurence of a substring in a given string
 * without checking the terminating NULL byte
 * @a: the address of source string
 * @b: the address of the substring to be checked
 *
 * Return: the address of the beginnig of the substring if found
 * or NULL if not found
 */
char *_strstr(char *a, char *b)
{
	int i;

	if (*b == 0)
		return (a);
	while (*a)
	{
		i = 0;
		if (a[i] == b[i])
		{
			do {
				if (b[i + 1] == '\0')
					return (a);

				i++;
			} while (a[i] == b[i]);
		}
		a++;
	}
	return ('\0');
}
