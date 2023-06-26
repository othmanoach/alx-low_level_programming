#include "main.h"
/**
 * _strlen - returning the length of a string
 * @s: char check
 * Description: will return the length of a string
 * Return: 0 is always success
*/
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
