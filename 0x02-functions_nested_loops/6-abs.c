#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @entry: The integer that gonna be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int entry)
{
	if (entry >= 0)
		return (entry);
	else
		return (-entry);
}
