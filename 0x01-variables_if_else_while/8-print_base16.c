#include <stdio.h>

/**
 *main - Entry point
 *Return: success
 */

int main(void)
{
	int lower = 'a';
	int digits = '0';

	while (digits <= '9')
	{
		putchar(digits);
		digits++;
	}
				
	while (lower <= 'f')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
