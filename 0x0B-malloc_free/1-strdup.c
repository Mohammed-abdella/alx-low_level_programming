#include "main.h"
#include <stdlib.h>
/**
 * _strdup - to create a copy of string on anewly allocated memory
 * @n: the pointer to the string to be coppied
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *n)
{
	char *ch;
	int i, s;

	s = 0;
	i = 0;
	while (n[i])
	{
		s++;
		i++;
	}
	ch = malloc(sizeof(char) * s);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		ch[i] = n[i];
	return (ch);
}
