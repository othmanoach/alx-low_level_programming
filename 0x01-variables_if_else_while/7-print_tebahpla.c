#include <stdio.h>
#include <ctype.h>
/**
*main - This program print alphabet letters in reverse
*
*Return: return 0 (means succes)
*/
int main(void)
{
	int alphaletter;

	for (alphaletter = 'z'; alphaletter >= 'a'; alphaletter--)
	{
		putchar(alphaletter);
	}
	putchar('\n');
	return (0);
}
