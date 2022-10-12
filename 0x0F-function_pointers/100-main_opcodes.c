#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - the main function
 * @argc: the number of arguments supplied
 * @argv: array of pointers to the arguments supplied
 * Return: 0
 */
int main(int  __attribute__((__unused__)) argc, char *argv[])
{
	int i, b;
	int (*a)(int, char**) = main;
	unsigned char oc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		oc = *(unsigned char *)a;
		printf("%.2x", oc);
		if (i == b - 1)
			continue;
		printf(" ");
		a++;
	}
	printf("\n");
	return (0);
}
