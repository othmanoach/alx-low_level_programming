#include <stdio.h>

/**
 * main - Prints first 50 fnumonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: returning 0.
 */
int main(void)
{
	int count;
	unsigned long fnum1 = 0, fnum2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fnum1 + fnum2;
		printf("%lu", sum);

		fnum1 = fnum2;
		fnum2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
