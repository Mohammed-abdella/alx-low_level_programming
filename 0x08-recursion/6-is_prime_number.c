#include "main.h"
int is_prime_number(int n);
int my_func(int a, int b);


/**
 * my_func - to check if a number is divisible or not
 * @a: the input number to be checked
 * @b: the divisor for a
 * Return: 0 if divisible OR 1 if not
 */
int my_func(int a, int b)
{
	if (a % b == 0)
		return (0);
	if (b == a / 2)
		return (1);
	return (my_func(a, b + 1));
}

/**
 * is_prime_number - to check whether a number is prime or not
 * @a: the input integer to be checked
 * Return: 1 if a is prime Or 0 if not
 */
int is_prime_number(int a)
{
	int i;

	i = 2;
	if (a <= 1)
		return (0);
	if (a == 2 || a == 3)
		return (1);
	return (my_func(a, i));
}
