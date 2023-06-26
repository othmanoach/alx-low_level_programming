#include "main.h"
#include <stdio.h>
/**
 * print_array - printing n element of an array of integers
 * @a: int check
 * @n: int check
 * Return: 0 means success
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
		if (b != n - 1)
		{
		printf("%d, ", a[b]);
		}
		else
		{	
			printf("%d", a[b]);
		}
			printf("\n");
}
