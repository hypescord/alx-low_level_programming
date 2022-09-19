#include "main.h"

/**
 * print_number - print an integer with _putchar
 * @n: integer to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int tens, digit, sign = n;
	double scroll = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			sign = -n;
			_putchar('-');
		}

		while (scroll <= sign)
			scroll *= 10;
		tens = scroll / 10;

		while (tens >= 1)
		{
			digit = sign / tens;
			_putchar(digit + '0');
			sign = (sign - (tens * digit));
			tens /= 10;
		}
	}
}
