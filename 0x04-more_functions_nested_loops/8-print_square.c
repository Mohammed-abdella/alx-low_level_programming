#include "main.h"
/**
 * print_square - to print a square of #
 * @n: the size of the square
 */
void print_square(int n)
{
	int c, i;

	if (n <= 0)
		_putchar('\n');
	for (c = 0; c < n; c++)
	{
		for (i = 1; i <= n; i++)
			_putchar('#');
		_putchar('\n');
	}
}
