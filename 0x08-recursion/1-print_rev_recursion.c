#include "main.h"
/**
 * _print_rev_recursion - to print a reverse of a given string using recursion
 * @a: the address of source memory
 */
void _print_rev_recursion(char *a)
{
	if (*a)
	{
		_print_rev_recursion(a + 1);
		_putchar(*a);
	}
}
