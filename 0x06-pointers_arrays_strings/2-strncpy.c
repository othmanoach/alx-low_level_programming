#include "main.h"

/**
 *_strncpy - copy a string
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of variable int
 *
 * Return: pointer the resulting string to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
