#include "main.h"
/**
 * print_triangle - to print a triangle of #
 * @n: the size of the triangle
 */
void print_triangle(int n)
{
	int c, i, j;

	if (n <= 0)
		_putchar('\n');
	for (c = 0; c < n; c++)
	{
		for (i = n; i > c; i--)
			_putchar(' ');
		for (j = 0; j <= c; j++)
			_putchar('#');
		_putchar('\n');
	}
}
