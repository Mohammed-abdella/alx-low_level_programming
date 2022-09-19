#include "main.h"
/**
 * print_rev - to print string in reverse
 * @a: the address of the input
 */
void  print_rev(char *a)
{
	int n, i;

	n = 0;
	i = 0;
	while (a[i++])
		n++;
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
