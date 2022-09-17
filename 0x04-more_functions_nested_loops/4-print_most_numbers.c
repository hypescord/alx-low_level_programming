#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 other than 2 & 4
 * Return: void
 */

void print_most_numbers(void)
{
	char init;

	for (init = '0'; init <= '9'; init++)
	{
		if (init != '2' && init != '4')
		{
			_putchar(init);
		}
	}
	_putchar('\n');
}
