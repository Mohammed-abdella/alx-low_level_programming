#include "main.h"
/**
 * is_palindrome - to check whether a given string is palindrome or not
 * @a: the address of source memory
 * Return: 1 if a is palindrome Or 0 if not
 */
int is_palindrome(char *a)
{
	int n, i, r;

	n = 0;
	i = 0;
	r = 0;
	while (a[i++])
		n++;
	for (i = 0; i < n / 2; i++)
	{
		if (a[i] == a[n - i - 1])
		{
			r = 1;
		}
		else
		{
			r = 0;
			break;
		}
	}
	return (r);
}
