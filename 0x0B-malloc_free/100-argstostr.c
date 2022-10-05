#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments supplied program
 * @ac: the number of arguments to be passed to the program
 * @av: an array of pointers to the arguments
 * Return: a pointer to the new string formed by concatenation
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, n;
	char *r;

	n = ac;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
	}
	r = malloc(sizeof(char) * n + 1);
	if (r == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			r[k++] = av[i][j];
		r[k++] = '\n';
	}
	return (r);
}
