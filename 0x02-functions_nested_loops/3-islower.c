#include "main.h"

/**
 * _islower - check for lowercase
 * @c: character to be checked for case
 * Return: 1 if true else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
