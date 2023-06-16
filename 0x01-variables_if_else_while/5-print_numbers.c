#include <stdio.h>
#include <ctype.h>
/**
*main - Printing all single digit of base 10 starting by 0
*
*Return: returns 0 (means succes)
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d",num);
	}
		putchar('\n');
	return (0);
}
