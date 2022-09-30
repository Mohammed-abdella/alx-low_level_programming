#include "main.h"
/**
 * _strcmp - to compare strings
 * @a: the first string
 * @b: the second string
 *
 * Return: 0 if equal
 * positive and negative for greater and less
 */
int _strcmp(char *a, char *b)
{
	while (*a && *b && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}
