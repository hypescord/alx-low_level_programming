#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabets ten times
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char alpha;
	int times;

	for (times = 0; times <= 9; times++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
