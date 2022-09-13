#include <stdio.h>

/**
 * main - the main function
 *
 * Return: integer
 */
int main(void)
{
	long i, a = 1, b = 2, sum;

	printf("%ld, %ld", a, b);
	for (i = 3; i <= 50; i++)
	{
		sum = a + b;
		printf(", %ld", sum);
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
