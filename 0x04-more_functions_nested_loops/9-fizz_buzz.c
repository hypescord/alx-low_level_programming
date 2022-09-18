#include <stdio.h>

/**
 * main - fizzbuzz shit
 * Return: Always 0 on success
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
			if (n != 100)
				printf(" ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
			if (n != 100)
				printf(" ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
			if (n != 100)
				printf(" ");
		}
		else
		{
			printf("%d", n);
			if (n != 100)
				printf(" ");
		}
		n++;
	}
	printf("\n");
	return (0);
}
