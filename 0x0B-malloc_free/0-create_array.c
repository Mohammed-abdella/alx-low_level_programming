#include "main.h"
#include <stdlib.h>
/**
 * create_array - to create an array of characters and initializes with char
 * @n: the size of the array
 * @a: the character to be initialized
 * Return: a pointer to the array or NULL
 */
char *create_array(unsigned int n, char a)
{
	char *ch;
	unsigned int i;

	if (n == 0)
		return (NULL);
	ch = malloc(sizeof(char) * n);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		ch[i] = a;
	return (ch);
}
