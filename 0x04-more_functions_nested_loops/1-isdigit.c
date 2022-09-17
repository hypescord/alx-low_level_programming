#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: integer element
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	
	return (0);
}
