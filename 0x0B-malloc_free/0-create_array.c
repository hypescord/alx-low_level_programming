#include "main.h"
#include <stdlib.h>

/**
 *create_array - function that creates an array of chars
 *@size: array size
 *@c: characters
 *Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
