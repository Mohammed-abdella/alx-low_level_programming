#include "main.h"
/**
 * puts2 - to print every other character of a strins to stdout
 * @a: the address of the input
 */
void  puts2(char *a)
{
	_putchar(*a++);
	while (*a++)
	{
		_putchar(*a++);
	}
	_putchar('\n');
}
