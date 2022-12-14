#include <stdlib.h>
#include "main.h"

/**
 * print_binary - to convert and print binary equivalent
 * @n: the input number to be converted
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
