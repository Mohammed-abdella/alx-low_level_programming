#include "main.h"
/**
 * cap_string- to capitalize words of a string
 * @a: the address of input string
 * Return: a pointer to the capitalizedd string
 */
char *cap_string(char *a)
{
	int i;

	i = 0;
	while (a[i])
	{
		while (!(a[i] >= 'a' && a[i] <= 'z'))
			i++;
		if (a[i - 1] == ',' || a[i - 1] == ';'
		|| a[i - 1] == '.' || a[i - 1] == '!'
		|| a[i - 1] == '?' || a[i - 1] == '"'
		|| a[i - 1] == '(' || a[i - 1] == ')'
		|| a[i - 1]  == '{' || a[i - 1] == '}'
		|| i == 0)
			a[i] -= 32;
		i++;
	}
	return (a);
}
