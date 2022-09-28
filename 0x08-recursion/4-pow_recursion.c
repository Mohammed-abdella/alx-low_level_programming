#include "main.h"
/**
 * _pow_recursion - to return factorial of a given integer using recursion
 * @a: the first input integer
 * @b: the second input integer
 * Return: the result of a to the power b
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}
