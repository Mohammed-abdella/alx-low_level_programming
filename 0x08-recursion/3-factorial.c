#include "main.h"
/**
 * factorial - to return factorial of a given integer using recursion
 * @a: the input integer
 * Return: the factorial of the input integer
 */
int factorial(int a)
{
	if (a < 0)
		return (-1);
	if (a == 0)
		return (1);
	return (a * factorial(a - 1));
}
