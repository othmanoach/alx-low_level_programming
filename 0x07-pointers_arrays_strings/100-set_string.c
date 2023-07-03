#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: the pointer to change
 * @to: string that will pointer change to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
