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
	int i, j;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	operator = argv[2];
	j = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && j == 0) || (*operator == '%' && j == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(i, j));
	return (0);
}
