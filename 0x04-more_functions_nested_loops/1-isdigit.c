/**
 * _isdigit - to check digits
 * @c: the input to be checked
 *
 * Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
	int r = 0;

	if (c >= '0' && c <= '9')
		r = 1;
	return (r);
}
