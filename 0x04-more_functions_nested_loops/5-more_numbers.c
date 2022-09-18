#include "main.h"

/**
 * more_numbers - print 10 times 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	char lines = 1;
	char init;

	while (lines <= 10)
	{
		for (init = 0; init <= 14; init++)
		{
			if ((init / 10) > 0)
			{
				_putchar((init / 10) + 48);
			}
			_putchar((init % 10) + 48);
		}
		_putchar('\n');
		lines++;
	}
}
