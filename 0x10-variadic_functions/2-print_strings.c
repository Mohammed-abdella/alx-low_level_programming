#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_stringss - to print strings with separator
 * @a: the separator of arguments
 * @n: the number of parameters passed
 * @...: the parameters (variable no of arguments)
*/
void print_strings(const char *a, const unsigned int n, ...)
{
	va_list vl;
	char *str;
	unsigned int i;

	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(vl, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && a != NULL)
			printf("%s", a);
	}
	printf("\n");
	va_end(vl);
}
