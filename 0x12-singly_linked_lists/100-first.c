#include<stdio.h>

/**
 * harevstortoise - Apply constructor attribute to be executed before main
 */
void harevstortoise(void) __attribute__ ((constructor));

/**
 * harevstortoise - implementation of the main function
 */
void harevstortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
