#include "main.h"

/**
 * print_numbers - print from 0 through 9
 * Return: void
 */
void print_numbers(void)
{
	char init = '0';

	while (init <= '9')
	{
		_putchar(init);
		init++;
	}
	_putchar('\n');
}
