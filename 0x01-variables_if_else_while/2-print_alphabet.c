#include <stdio.h>
#include <ctype.h>
/**
*main - This is a program that printing alphabet letter in lowercase
*
*Return: return 0 (means succes)
*/
int main(void)
{
	int alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		alphabet = tolower(alphabet);
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
