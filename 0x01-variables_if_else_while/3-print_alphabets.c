#include <stdio.h>
#include <ctype.h>
/**
*main - this is a program printing alphabets in all cases
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
		if (alphabet == 'z')
		{
			alphabet = 'A';
			for (; alphabet <= 'Z'; alphabet++)
			{
				putchar(alphabet);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
