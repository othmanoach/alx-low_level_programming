#include "main.h"

/**
 * times_table - Prints the 9-times-table, starting with number 0.
 */
void times_table(void)
{
	int num, n, mult;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');

			mult = num * n;

			if (mult <= 9)
				_putchar(' ');
			else
				_putchar((mult / 10) + '0');

			_putchar((mult % 10) + '0');
		}
		_putchar('\n');
	}
}
