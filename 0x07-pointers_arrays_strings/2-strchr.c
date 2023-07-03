#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: occurrence of the character
 * @s: the located value in the string
 * Return: a pointer || null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
