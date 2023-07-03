#include "main.h"

/**
 * _memset - function that fills the memory area pointed
 * to fill @s with the constant byte @b
 * @n: bytes of the memory area pointed to fill @s
 * @s: fills with the constant byte @b
 * @b: the memory area pointer
 * Return: the pointer @b to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
