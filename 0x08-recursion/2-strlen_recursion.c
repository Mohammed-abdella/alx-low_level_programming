#include "main.h"
/**
 * _strlen_recursion - to return length of a given string using recursion
 * @a: the address of source memory
 * Return: the length of the input string
 */
int _strlen_recursion(char *a)
{
	if (*a)
	{

	return (1 + _strlen_recursion(a + 1));
	}
	else
		return (0);
}
