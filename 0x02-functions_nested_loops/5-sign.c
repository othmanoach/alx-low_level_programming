#include "main.h"

/**
 * print_sign - Printing the sign of a number.
 * @num: The number of which the sign will be printed.
 *
 * Return: if the number is greater than zero it zill return 1.
 *         if the number is zero it will return 0.
 *         if the number is less than zero it will return -1.
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
