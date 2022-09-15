#include "main.h"

/**
 * print_sign - print the sign of a nummber
 * @n: number whose sign is printed
 * Return: 1 if > 0, 0 if = 0, else -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
