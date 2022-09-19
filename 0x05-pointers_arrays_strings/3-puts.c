#include "main.h"
/**
 * _puts - to print strings to stdout
 * @a: the address of the input
 */
void  _puts(char *a)
{
	while (*a)
	{
		_putchar(*a++);
	}
	_putchar('\n');
}
