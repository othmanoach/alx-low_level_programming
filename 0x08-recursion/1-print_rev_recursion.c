#include "main.h"

/**
 * _print_rev_recursion - priting a string in reverse
 * @s : a string
 * Return : returning void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
