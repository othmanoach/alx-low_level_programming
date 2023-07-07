#include <stdio.h>
#include "main.h"

/**
 * main - printing the numbers of arguments passed to the program
 * @argc: the number of the arguments
 * @argv: the array of the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
