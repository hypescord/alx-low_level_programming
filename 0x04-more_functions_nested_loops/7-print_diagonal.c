#include "main.h"

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int lines;
	int spaces;

	if (n > 0)
	{
		for (lines = 1; lines <= n; lines++)
		{
			for (spaces = 1; spaces < lines; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
