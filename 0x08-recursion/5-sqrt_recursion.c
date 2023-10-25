#include "main.h"

/**
 *_sqrt_recursion - print square root
 *@n: integer
 *Return: int square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return comp_sqrt(1, n);
}

int comp_sqrt(int num, int std)
{
	if (num * num == std)
		return (num);
	if(num * num > std)
		return (-1);
	return (comp_sqrt(num + 1, std));
}
