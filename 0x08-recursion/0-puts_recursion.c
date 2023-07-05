#include "main.h"

/**
 * _puts_recursion - the main function
 * @s : the character used in the function
 * Return : void
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
}
}
