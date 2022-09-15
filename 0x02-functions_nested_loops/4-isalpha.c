#include "main.h"

/**
 * _isalpha - check if c is a letter
 * @c: character is nature is verified
 * Return: 1 if letter, else 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
