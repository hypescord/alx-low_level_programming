#include <stdio.h>

/**
 * main - print largest primt factor of 612852475143
 * Return: 0, success
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long prime = 2;

	while (prime < num)
	{
		if (num % prime == 0)
		{
			num /= prime;
			prime = 2;
		}
		else
			prime++;
	}
	printf("%lu\n", num);
	return (0);
}
