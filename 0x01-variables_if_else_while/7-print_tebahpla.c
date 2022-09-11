#include <stdio.h>

/**
 *main - Entry point
 *Return: success
 */

int main(void)
{
	int lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}
