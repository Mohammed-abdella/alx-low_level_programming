#include "main.h"

/**
 * print_alphabet_x10 - to print lowercase letters
 *
 * Return: none
 */
void print_alphabet_x10(void)
{
	int ch;
	int a = 0;

	while (a < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		a++;
	}
}
