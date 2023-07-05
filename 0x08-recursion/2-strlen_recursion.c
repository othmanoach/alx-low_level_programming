#include "main.h"
#include "stdio.h"
/**
 * _strlen_recursion - main function that returns tht length
 * @s : a string
 * Return : int
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

