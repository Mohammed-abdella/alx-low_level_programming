#include "main.h"
/**
 * print_number - to print numbers using putchar
 * @a: the input integer
 */
void print_number(int a)
{
	unsigned int i;

	i = a;
	if (a < 0)
	{
		_putchar('-');
		i = -i;
	}

	if ((i / 10) > 0)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
