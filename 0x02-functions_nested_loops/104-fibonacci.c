#include <stdio.h>

/**
 * main - the first 98 fsumonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fsum1 = 0, fsum2 = 1, sum;
	unsigned long fsum1_half1, fsum1_half2, fsum2_half1, fsum2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fsum1 + fsum2;
		printf("%lu, ", sum);

		fsum1 = fsum2;
		fsum2 = sum;
	}

	fsum1_half1 = fsum1 / 10000000000;
	fsum2_half1 = fsum2 / 10000000000;
	fsum1_half2 = fsum1 % 10000000000;
	fsum2_half2 = fsum2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fsum1_half1 + fsum2_half1;
		half2 = fsum1_half2 + fsum2_half2;
		if (fsum1_half2 + fsum2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		fsum1_half1 = fsum2_half1;
		fsum1_half2 = fsum2_half2;
		fsum2_half1 = half1;
		fsum2_half2 = half2;
	}
	printf("\n");
	return (0);
}
