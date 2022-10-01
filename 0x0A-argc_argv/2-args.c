#include <stdio.h>

/**
 * main - prints the list of arguments supplied program
 * @argc: the number of arguments to be passed to the program
 * @argv: an array of pointers to the arguments
 * Return: 0
 */
int main(__attribute__((__unused__)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
