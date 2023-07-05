#include "main.h"
/**
 * _strlen_recursion - the length of the string
 * @s:the string used
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}

