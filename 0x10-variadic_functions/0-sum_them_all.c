#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - to calculate sum of given arguments
 * @n: the number of parameters passed
 * @...: the parameters (variable no of arguments)
 * Return: the sum of arguments or 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum = 0;

	va_start(a, n);
	for (i = 0; i < n; i++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
