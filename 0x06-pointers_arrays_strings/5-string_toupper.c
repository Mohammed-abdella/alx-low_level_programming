#include "main.h"
/**
 * string_toupper - to change to uppercase
 * @a: the address of input string
 * Return: a pointer to the changed string
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i])
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
	return (a);
}
