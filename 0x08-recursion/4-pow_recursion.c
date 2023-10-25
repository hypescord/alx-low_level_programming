#include "main.h"

/**
 *_pow_recursion - print power of base
 *@x: bass int
 *@y: subscript int
 *Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
