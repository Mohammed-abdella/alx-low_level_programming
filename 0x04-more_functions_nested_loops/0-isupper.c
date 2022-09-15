/**
 * _isupper - to check uppercase letters
 * @c: the character to be checked
 *
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	int r = 0;

	if (c >= 'A' && c <= 'Z')
		r = 1;
	return (r);
}
