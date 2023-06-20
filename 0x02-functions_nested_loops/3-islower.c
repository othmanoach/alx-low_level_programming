#include "main.h"

/**
 * _islower - checking if a character is lowercase or not
 * @character: get replaced by the character that will be checked.
 *
 * Return: 1 if character is lowercase / otherwise 0.
 */
int _islower(int character)
{
	if (character >= 'a' && character <= 'z')
		return (1);
	else
		return (0);
}
