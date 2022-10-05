#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory.
 *@str: string pointer
 *Return: pointer to new memory
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	s = malloc(strlen(str) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[i] = '\0';

	if (s == NULL)
		return (NULL);

	return (s);
}
