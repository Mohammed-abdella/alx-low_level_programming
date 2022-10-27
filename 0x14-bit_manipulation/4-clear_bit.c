#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - to set the bit in a given index to 0
 * @n: the input number to use
 * @index: the position
 * Return: 1 if succed OR -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
