#include "main.h"

/**
 * print_line - draw a straight line
 * @n - number of times character should be printed
 * Return: void
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
