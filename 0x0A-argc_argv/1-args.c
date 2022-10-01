#include <stdio.h>

/**
 *main - print number of arguments passed into main
 *@argc: counter
 *@argv: elements array
 *Return: 0 success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
