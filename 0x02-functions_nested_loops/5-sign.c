#include "main.h"

/**
 * print_sign - to print the sign of an input number
 * @c: the character to be checked
 *
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int c)
{
	int r = 0;

	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (r);
}
