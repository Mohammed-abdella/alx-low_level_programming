#include <stdio.h>

/**
 * main - main function
 * description - starting point
 * Return: an integer
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
