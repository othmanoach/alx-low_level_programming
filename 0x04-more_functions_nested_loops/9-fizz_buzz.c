#include <stdio.h>
#include "main.h"

/**
 * main - main function
 *
 * Description: prints the numbers 1 to 100
 * print Fizz for multiples of 3, Buzz for multiples of 5
 * FizzBuzz for multiples of both
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%n", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
