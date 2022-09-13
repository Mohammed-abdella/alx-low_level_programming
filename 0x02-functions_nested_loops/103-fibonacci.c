#include <stdio.h>

/**
 * main - the main function
 *
 * Return: integer
 */
int main(void)
{
	unsigned long a = 1, b = 2, fib = 0, sum = 2;

	while (fib <= 4000000)
	{
		fib = a + b;
		if ((fib % 2) == 0)
			sum += fib;
		a = b;
		b = fib;
	}
	printf("%lu\n", sum);
	return (0);
}
