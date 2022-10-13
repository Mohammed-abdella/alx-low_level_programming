#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - to print numbers with separator
 * @a: the separator of arguments
 * @n: the number of parameters passed
 * @...: the parameters (variable no of arguments)
*/
void print_numbers(const char *a, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;

	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vl, int));
		if (i != (n - 1) && a != NULL)
			printf("%s", a);
	}
	printf("\n");
	va_end(vl);
}
