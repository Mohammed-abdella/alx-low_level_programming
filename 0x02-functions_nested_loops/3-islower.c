#include "main.h"

/**
 * _islower - to check lowercase letters
 * @c: the character to be checked
 *
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	int r = 0;

	if (c >= 'a' && c <= 'z')
		r = 1;
	return (r);
}
