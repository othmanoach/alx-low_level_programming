#include <stdio.h>

/**
 * main - Listing the natural numbers below 1024 that are multiples of 3 or 5.
 *
 * Return: returning 0.
 */
int main(void)
{
	int a, mult = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			mult += a;
	}

	printf("%d\n", mult);

	return (0);
}
