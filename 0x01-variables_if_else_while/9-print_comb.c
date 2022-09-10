#include <stdio.h>

/**
 *main - Entry point
 *Return: success
 */

int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
