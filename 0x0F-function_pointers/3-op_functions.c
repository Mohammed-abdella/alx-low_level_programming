#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a function to perform sum operation
 * @a: the first number
 * @b: the second number
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function to perform difference operation
 * @a: the first number
 * @b: the second number
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function to perform product operation
 * @a: the first number
 * @b: the second number
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function to perform division operation
 * @a: the first number
 * @b: the second number
 * Return: the quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function to perform modulo operation
 * @a: the first number
 * @b: the second number
 * Return: the remainder of a/b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

