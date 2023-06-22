#include "main.h"

/**
 * print_square - prints a square of size s
 * @s: size of the square
 *
 * Return: void
 */


void print_square(int s)
{
	int i, j;

	if (s <= 0)
		_putchar('\n');

	for (i = 0; i < s; i++)
	{
		for (k = 0; k < (s); k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
