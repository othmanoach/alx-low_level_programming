#include <stdio.h>
#include <ctype.h>
/**
*main - this is a program printing alphabet except q and e
*
*Return: return 0
*/
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			continue;
		}
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
