#include "main.h"

/**
 * _atoi - Convert a string to integer.
 * @s: The pointer to convert
 *
 * Return: An integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int un = 0;
	int m = 1;
	int ig = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			m *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			ig = 1;
			un = (un * 10) + (s[c] - '0');
			c++;
		}

		if (ig == 1)
		{
			break;
		}

		c++;
	}

	un *= m;
	return (un);
}
