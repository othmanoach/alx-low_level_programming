#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - printing my name
 * @name: my name to print
 * @f: the pointer to the printing function
 * Return : null
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	return;
	f(name);
}
