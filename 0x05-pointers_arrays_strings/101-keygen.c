#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a function to generate random valid passwords
 *
 * Return: 0
 */
int main(void)
{
	char password[84];
	int i, s, half1, half2;

	i = 0;
	s = 0;

	srand(time(0));

	while (s < 2772)
	{
		password[i] = 33 + rand() % 94;
		s += password[i++];
	}
	password[i] = '\0';

	if (s != 2772)
	{
		half1 = (s - 2772) / 2;
		half2 = (s - 2772) / 2;
		if ((s - 2772) % 2 != 0)
			half1++;
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + half1))
			{
				password[i] -= half1;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + half2))
			{
				password[i] -= half2;
				break;
			}
		}
	}

	printf("%s", password);

	return (0);
}
