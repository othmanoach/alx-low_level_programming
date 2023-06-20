#include <stdio.h>

/**
 * print_to_98 - Prints numbers from input to 98,separated by a comma.
 * @num: The number to begin counting at.
 */
void print_to_98(int num)
{
	if (num >= 98)
	{
		while (num > 98)
			printf("%d, ", num--);
		printf("%d\n", num);
	}

	else
	{
		while (num < 98)
			printf("%d, ", num++);
		printf("%d\n", num);
	}
}
