#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - the starting point of the program
*
*Return: return 0 mean success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
