#include <stdio.h>
#include <stdlib.h>

/**
 * main - to print the product of two argments
 * @argc: the number of arguments to be passed to the program
 * @argv: an array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);
	return (0);
}
