#include "main.h"
/**
 * leet - to encode a string to 1337
 * @a: the address of input string
 * Return: a pointer to the encodded string
 */
char *leet(char *a)
{
	int i, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	i = 0;
	while (a[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (a[i] == leet[j]
			|| a[i] - 32 == leet[j])
				a[i] = j + '0';
		}
		i++;
	}
	return (a);
}
