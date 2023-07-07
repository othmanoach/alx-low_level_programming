#include <stdio.h>
#include "main.h"

/**
 * main - printing all the arguments and what receives
 * @argc: the number of the arguments
 * @argv: the array of the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
