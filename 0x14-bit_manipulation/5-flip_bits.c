#include <stdlib.h>
#include "main.h"

/**
 * flip_bit - to count no of bits flipped to change a number
 * @n: the input number to use
 * @m: the number n to be changed to
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m, b = 0;

	while (a > 0)
	{
		b += (a & 1);
		a >>= 1;
	}
	return (b);
}
