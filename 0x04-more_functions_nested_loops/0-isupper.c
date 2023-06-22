#include "main.h"

/**
 * _isupper - checking uppercase letters
 * @c: the character to check
 *
 * Return: returning 0 or 1 if uppercase or not
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
