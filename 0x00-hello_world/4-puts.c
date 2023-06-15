#include <stdio.h>
#include <string.h>
/**
 * opening a main for my first program in c
 * creating a simple script to show a sentence
 */
int main(void)
{
	char displayed[52]; /* displayed is an array with 52 char */
/* strcpy to copy sentence into the array displayed */
	strcpy(displayed, "\"Programming is like building a multilingual puzzle");
	/* puts to display content of array displayed */
	puts(displayed);
	/* returning 0 will exit*/
	return (0);
}
