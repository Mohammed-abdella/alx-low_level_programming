#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - to print numbers up to 98
 * @a: the starting number
 *
 *
 * Return: sum of the two input nmumbers
 */
void print_to_98(int a)
{
	int counter;
	if (a <= 98)
	{
		for(counter = a; counter <= 98; counter++)
		{
			if (counter == 98)
			{
				printf("%d", counter);
				break;
			}
			printf("%d, ", counter);
		}
	}
	else
	{
		for(counter = a; counter >= 98; counter--)
		{
			if (counter == 98)
			{
				printf("%d", counter);
				break;
			}
			printf("%d, ", counter);
		}
	}
	printf("\n");
}
