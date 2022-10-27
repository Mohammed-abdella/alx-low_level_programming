#include <stdlib.h>
#include "main.h"

/**
 * set_bit - to set the bit in a given index to 1
 * @n: the input number to use
 * @index: the position
 * Return: 1 if succed OR -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
