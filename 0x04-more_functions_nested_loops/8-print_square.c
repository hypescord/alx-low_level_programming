#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int length = 0;

		while (length < size)
		{
			int breadth = 0;

			while (breadth < size)
			{
				_putchar('#');
				breadth++;
			}
			_putchar('\n');
			length++;
		}
	}
	else
		_putchar('\n');
}
