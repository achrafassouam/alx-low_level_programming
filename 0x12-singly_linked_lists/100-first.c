#include <stdio.h>

void __attribute__ ((constructor)) init();

/**
 * init - initialize a code before main
 */

void init(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
