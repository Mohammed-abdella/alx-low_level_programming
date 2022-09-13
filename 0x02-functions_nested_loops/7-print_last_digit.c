#include "main.h"

/**
 * print_last_digit - to print the last digit of an input number
 * @c: the number to be inputted
 *
 * Return: the last digit of an input number
 */
int print_last_digit(int c)
{
	int r = c % 10;
	if (r < 0)
		r = -r;
	_putchar(r + '0');

	return (r);
}
