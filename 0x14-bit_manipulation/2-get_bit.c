#include <stdlib.h>
#include "main.h"

/**
 * get_bit - to get the bit in a given index
 * @n: the input number to search
 * @index: the position
 * Return: the bit or -1 if invalid
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
