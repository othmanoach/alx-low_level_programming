#include <stdio.h>

/**
 * main - Prints the sum of even-valued fnumonacci, terms not exceeding 4000000.
 *
 * Return: returning 0.
 */
int main(void)
{
	unsigned long fnum1 = 0, fnum2 = 1, fsum;
	float tsum;

	while (1)
	{
		fsum = fnum1 + fnum2;
		if (fsum > 4000000)
			break;

		if ((fsum % 2) == 0)
			tsum += fsum;

		fnum1 = fnum2;
		fnum2 = fsum;
	}
	printf("%.0f\n", tsum);

	return (0);
}
