#include <stdio.h>

/**
 *main - Entry point
 *Return: success
 */

int main(void)
{
	int num = '9';

	while (num >= '0')
	{
		putchar(num);
		num--;
	}
	putchar('\n');
	return (0);
}
