#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *Return: success
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}

	putchar('\n');

	return (0);
}
