#include "main.h"
/**
 * more_numbers - to print numbers 0 to 9
 * ten times
 */
void more_numbers(void)
{
	int c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 9; c++)
			_putchar(c + '0');
		_putchar('\n');
	}
}