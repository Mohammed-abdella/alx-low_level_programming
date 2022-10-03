#include "main.h"
#include <stdlib.h>
/**
 * str_concat - to concatenate two strings on a newly allocated memory
 * @a: the pointer to the first string
 * @b: the pointer to the second string
 * Return: a pointer to the new string or NULL
 */
char *str_concat(char *a, char *b)
{
	char *ch;
	int i, j, s1, s2;

	if (a == NULL)
		a = "";
	if (b == NULL)
		b = "";
	s1 = 0, s2 = 0, i = 0;
	while (a[i])
	{
		s1++;
		i++;
	}
	i = 0;
	while (b[i])
	{
		s2++;
		i++;
	}
	ch = malloc(sizeof(char) * (s1 + s2 + 1));
	if (ch == NULL)
		return (NULL);
	if (a == NULL)
	{
		for (i = 0; i < s2; i++)
			ch[i] = b[i];
		return (ch);
	}
	if (b == NULL)
	{
		for (i = 0; i < s1; i++)
			ch[i] = a[i];
		return (ch);
	}
	for (i = 0; i < s1; i++)
		ch[i] = a[i];
	for (j = 0; i < (s1 + s2); i++, j++)
		ch[i] = b[j];
	return (ch);
}
