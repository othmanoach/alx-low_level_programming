#include "main.h"
/**
 * puts2 - printing every other character of a string
 * @str: char check
 * Return: 0 means success
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
}
