#include "main.h"

/**
 * _memcpy - function copies the @n bytes from the memory area @src
 *
 * @n: function that copies
 * @src: the bytes from the memory area
 * @dest: to the memory area
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
