#include <stdlib.h>
#include "main.h"

/**
 * get_endianness - to check endianness of an input number
 * Return: 1 if big-endian or 0 if little-endian
 */
int get_endianness(void)
{
	int i = 1;
	char *a = (char *)&i;

	if (*a == 1)
		return (1);
	return (0);
}
