#include "main.h"

/**
 *is_prime_number - cgeck for prime
 *@n: integer
 *Return: 1 if trye, 0 if false
 */

int is_prime_number(int n)
{
	if (n <=  1)
		return (0);
	else if (comp_prime(n, n / 2) > 0)
		 return (1);
        return (0);
}
int comp_prime(int i, int x)
{
	if (x == 1)
		return (1);
	if (i % x == 0)
		return (0);
	else
		return (comp_prime(i, x - 1));
}
