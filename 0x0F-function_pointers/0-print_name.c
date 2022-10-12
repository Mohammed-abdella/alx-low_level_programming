#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - to print a name
 * @name: the name to be printed
 * @f: a function used as a callback
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
