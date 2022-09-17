#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: character element
 * Return: 1 for upper, else 0 
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
