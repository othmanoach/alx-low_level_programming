#include "main.h"

/**
 * _isalpha - if a character is alphabetic or not (checking).
 * @character: The character to be checked.
 *
 * Return: 1 if character is lowercase or uppercase/otherwise 0.
 */
int _isalpha(int character)
{
	if ((character >= 'a' && character <= 'z') ||
	    (character >= 'A' && character <= 'Z'))
		return (1);
	else
		return (0);
}
