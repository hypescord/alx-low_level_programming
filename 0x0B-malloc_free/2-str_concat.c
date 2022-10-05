#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenate strings
 *@s1: first string
 *@s2: added string
 *Return: strings together
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *str;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (i = 0; s1[i]; i++)
	{
	}

	for (j = 0; s2[j]; j++)
	{
	}

	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; *s1 != '\0'; i++)
	{
		str[i] = *s1++;
	}
	for (j = i; *s2; j++)
		str[j] = *s2++;
	return (str);
}
