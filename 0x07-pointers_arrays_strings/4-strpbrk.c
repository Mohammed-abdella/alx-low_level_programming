#include "main.h"
/**
 * _strpbrk - to check occurence of a group of bytes in a given string
 * @a: the address of source string
 * @b: the address of the group of bytes to be checked
 *
 * Return: the addres of the group of bytes if one of them is found
 * or NULL if no match is found
 */
char *_strpbrk(char *a, char *b)
{
	int i;

	while (*a)
	{

		for (i = 0; b[i]; i++)
		{
			if (*a == b[i])
			{
				return (a);
			}
		}
		a++;
	}
	return ('\0');
}
