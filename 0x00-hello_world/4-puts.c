#include <stdio.h>
#include <string.h>
int main(void)
{
       	/** main taking an integer value without having any argument(void)*/
	char displayed[52]; /* displayed is an array that can hold up to 52 character */
/* strcpy to copy sentence into the array displayed */
	strcpy(displayed, "\"Programming is like building a multilingual puzzle");
	/* puts to display content of array displayed */
	puts(displayed);
	/* returning 0 will exit*/
	return (0);
}
