#include "main.h"
/**
 * *_strcpy - to concatenate strings
 * @a: the address of the destination string
 * @b: the address of the source string
 */
char* _strcpy(char *a, char *b)
{
	int i;

	i = 0;
	while (b[i])
	{
		a[i] = b[i];
		i = i + 1;
	}
	return (a);
}
