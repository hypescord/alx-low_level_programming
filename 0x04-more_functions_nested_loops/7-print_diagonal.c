#include "main.h"

/**
 * print_diagonal - draw a digonal line
 * @n: number of times to draw
 * Return: void
 */

void print_diagonal(int n)
{
	int lines;
	int spaces;

	if (n > 0)
		for (lines = 1; lines <= n; lines++)
		{
			for (spaces = 0; spaces < lines; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
