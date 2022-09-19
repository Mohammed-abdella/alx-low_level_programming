/**
 * swap_int - to swaqp two integers
 * @a: the address first input number
 * @b: the address second input number
 */
void  swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
