#include "main.h"
/**
 * puts2 - to print every other character of a strins to stdout
 * @a: the address of the input
 */
void  puts2(char *a)
{
	int n, i;

	n = 0;
	i = 0;

	while(a[i++])
		n++;
	for (i = 0; i < n; i += 2)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
