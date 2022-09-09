#include <stdio.h>

/**
 * main - main function
 * description - starting point
 * Return: an integer
 */
int main(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	for (b = 'a'; b <= 'e'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
