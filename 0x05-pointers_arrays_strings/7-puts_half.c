#include "main.h"
/**
 * puts_half - to print half of a string
 * @a: the address of the input
 */
void  puts_half(char *a)
{
	int n, i;

	n = 0;
	i = 0;
	while (a[i++])
	{
		n++;
	}
	for (i = n / 2; i < n; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
