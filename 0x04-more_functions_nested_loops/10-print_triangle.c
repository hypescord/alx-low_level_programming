#include "main.h"

/**
 * print_triangle - print left handed triangle
 * @size: height and base
 * Return: void
 */

void print_triangle(int size)
{
	int base;
	int spaces;
	int height;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (spaces = size - height; spaces > 0; spaces--)
			{
				_putchar(' ');
			}
			for (base = 1; base <= height; base++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

