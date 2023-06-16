#include <stdio.h>
#include <ctype.h>
/**
*main - Prints all possible combinations of single digit number
*Return: returns 0 (means succes)
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
