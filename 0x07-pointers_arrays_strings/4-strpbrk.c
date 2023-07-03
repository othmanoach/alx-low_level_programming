#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s:first occurrence in the string
 * @accept: if no such byte matches @NULL, if else : one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
