/**
 * _strlen - to return the length of a string
 * @a: the address of input string
 *
 * Return: length
 */
int  _strlen(char *a)
{
	int n;

	n = 0;
	while (*a++)
		n++;
	return (n);
}
