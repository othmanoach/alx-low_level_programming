#include "main.h"

/**
* _isdigit - function that check for a digit -0 through 9-.
* @c: the char to check
* Return:  returning 0 or 1
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
