#include "main.h"

/**
 * print_alphabet_x10 - Printing the alphabet X 10 time in lowercase
 */
void print_alphabet_x10(void)
{
	int num = 1;
	char alpha;

	while (num++ <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
