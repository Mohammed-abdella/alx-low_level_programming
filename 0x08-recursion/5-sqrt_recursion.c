#include "main.h"
/**
 * _sqrt_recursion - to return square-root of a given integer using recursion
 * @a: the input integer
 * Return: the square-root of an input a
 */
int _sqrt_recursion(int a)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}
