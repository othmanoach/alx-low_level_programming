#include "main.h"

/**
 * print_diagonal - printing diagonal lines
 * @n: enter the variable
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int i, n;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (n = 0; n < i; n++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
