#include "main.h"
/**
 * _strspn - to check occurence of a prefix string in a given string
 * @a: the address of source string
 * @b: the prefix string to be checked
 *
 * Return: the number of bytes of a which contain b
 */
unsigned int _strspn(char *a, char *b)
{
	int i;
	unsigned int n;

	n = 0;
	while (*a)
	{

		for (i = 0; b[i]; i++)
		{
			if (*a == b[i])
			{
				n++;
				break;
			}
			else if (b[i + 1] == '\0')
				return (n);
		}
		a++;
	}
	return (n);
}
