#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - to print a char
 * @arg: A list of arguments pointing to
 * the character to be printed.
 */
void print_char(va_list arg)
{
	char l;

	l = va_arg(arg, int);
	printf("%c", l);
}

/**
 * print_int - to print an int
 * @arg: A list of arguments pointing to
 * the integer to be printed.
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

/**
 * print_float - to print a float
 * @arg: A list of arguments pointing to
 * the float to be printed.
 */
void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * print_string - to print a string
 * @arg: A list of arguments pointing to
 * the string to be printed.
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - to print anything
 * @format: the string of characters showing types
 * @...: the parameters (variable no of arguments)
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *s = "";
	printer_t f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(f[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", s);
			f[j].print(args);
			s = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
