#include "main.h"

/**
 * print_last_digit - prints the last digit of the number.
 * @number: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int number)
{
	int last_digit = number % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
