#include "main.h"

/**
 * _isalpha - to check lowercase letters
 * @c: the character to be checked
 *
 * Return: 1 if lowercase, 0 if not
 */
int _isalpha(int c)
{
	int r = 0;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		r = 1;
	return (r);
}
