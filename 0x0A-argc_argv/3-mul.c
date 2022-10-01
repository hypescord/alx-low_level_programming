#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[argc - 2]) * atoi(argv[argc - 1]));
	else
		printf("Error\n");

	return (0);
}
