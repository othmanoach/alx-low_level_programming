#include <stdio.h>
#include <string.h>
int main(void)
{
       	/** main taking an integer value without having any argument(void)*/
	char displayed[52]; /* displayed is an array that can hold up to 52 character */
/* we are using strcpy to copy the sentence into the array displayed */
	strcpy(displayed, "\"Programming is like building a multilingual puzzle");
	/* puts is used to display the content of the array displayed */
	puts(displayed);
	/* returning 0 will help us to exit the main function and know that the script is working just fine */
	return (0);
}
