#include <stdio.h>

/**
 * main - prints the number of arguments supplied program
 * @argc: the number of arguments to be passed to the program
 * @argv: an array of pointers to the arguments
 * Return: 0
 */
int main(int argc, __attribute__((__unused__)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
