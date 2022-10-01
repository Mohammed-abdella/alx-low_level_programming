#include <stdio.h>
#include <stdlib.h>

/**
 * main - to print minimum number of coins of 25, 10, 5, 2 and 1 to change
 * a given argument
 * @argc: the number of arguments to be passed to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 or 1 if number of argument is not one
 */
int main(int argc, char *argv[])
{
	int i, j;

	j = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	while (i > 0)
	{
		j++;
		if ((i - 25) >= 0)
		{
			i -= 25;
			continue;
		}
		if ((i - 10) >= 0)
		{
			i -= 10;
			continue;
		}
		if ((i - 5) >= 0)
		{
			i -= 5;
			continue;
		}
		if ((i - 2) >= 0)
		{
			i -= 2;
			continue;
		}
		i--;
	}

	printf("%d\n", j);
	return (0);
}
