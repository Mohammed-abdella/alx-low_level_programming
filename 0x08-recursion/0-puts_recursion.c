#include "main.h"
/**
 * _puts_recursion - to print a string using recursion
 * @a: the address of source memory
 */
void _puts_recursion(char *a)
{
	if (*a)
	{
		_putchar(*a);
		_puts_recursion(a + 1);
	}
	else
		_putchar('\n');
}
