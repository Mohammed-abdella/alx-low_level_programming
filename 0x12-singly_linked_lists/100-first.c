#include <stdio.h>

void my_function(void) __attribute__ ((constructor));

/**
 * my_function - a function to be executed before main
 */

void my_function(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
