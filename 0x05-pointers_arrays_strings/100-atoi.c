#include "main.h"
/**
 * _atoi - a function to return integer from string
 * @a: the string to be converted
 *
 * Return: The integer
 */
int _atoi(char *a)
{
	int s;
	unsigned int n;

	s = 1;
	n = 0;

	do {
		if (*a == '-')
			s *= -1;
		else if (*a >= '0' && *a <= '9')
			n = (n * 10) + (*a + '0');
		else if (n > 0)
			break;
	} while (*a++);
	return (n * s);
}
