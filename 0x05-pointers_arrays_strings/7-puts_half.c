#include "main.h"
/**
 * puts_half - to print half of a string
 * @a: the address of the input
 */
void  puts_half(char *a)
{
	int n, i, s;

	n = 0;
	i = 0;
	while (a[i++])
	{
		n++;
	}
	if (n % 2 == 0)
		s = n / 2;
	else
		s = (n / 2) - 1;

	for (i = s; i < n; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
