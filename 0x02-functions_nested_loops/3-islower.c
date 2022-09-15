#include "main.h"

/**
 * _islower - check for lowercase
 * @c: character to be checked for case
 * Return: 1 if true else 0
 */
int ret;

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}

	return (ret);
}
