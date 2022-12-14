#include "main.h"

/**
 * print_last_digit - print last digit clearly
 * @n: integer to work with
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;

	_putchar((n % 10) + '0');

	return (n % 10);
}
