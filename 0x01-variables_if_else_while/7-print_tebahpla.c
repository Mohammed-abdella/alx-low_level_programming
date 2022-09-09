#include <stdio.h>

/**
 * main - main function
 * description - starting point
 * Return: an integer
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
