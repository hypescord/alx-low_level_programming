#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *Return: success
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}
	putchar('\n');
	return (0);
}
