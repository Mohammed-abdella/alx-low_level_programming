#include "main.h"
/**
 * print_line - to print a straignt line
 * @n: the length of the line
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
