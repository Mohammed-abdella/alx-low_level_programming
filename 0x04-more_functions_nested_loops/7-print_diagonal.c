#include "main.h"
/**
 * print_diagonal - to print a diagonal line
 * @n: the length of the diagonal line
 */
void print_diagonal(int n)
{
	int c, i;

	if (n <= 0)
		_putchar('\n');
	for (c = 0; c < n; c++)
	{
		for (i = 1; i <= c; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
