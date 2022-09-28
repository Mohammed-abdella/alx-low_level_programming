#include "main.h"
int _sqrt_recursion(int n);
int my_func(int a, int b);


/**
 * my_func - to find the natural square root of a given number
 * @a: the input integer
 * @b: the root guessed to be tested
 * Return: the square-root of an input a or -1 if the
 * number doesn't have natural square root
 */
int my_func(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b == a / 2)
		return (-1);
	return (my_func(a, b + 1));
}

/**
 * _sqrt_recursion - to return square-root of a given integer using recursion
 * @a: the input integer
 * Return: the square-root of an input a
 */
int _sqrt_recursion(int a)
{
	int i;

	i = 0;
	if (a < 0)
		return (-1);
	if (a == 1)
		return (1);
	return (my_func(a, i));
}
