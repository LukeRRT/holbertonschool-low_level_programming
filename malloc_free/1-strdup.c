#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - copy string to another as parameter
 * @str: string character
 *
 * Return: NULL or character of duplicate
 */

char *_strdup(char *str)
{
	char *duplicate;
	size_t length = 0;
	size_t i = 0;

	if (str == NULL)
		return ("failed to allocate memory");

	while (str[length] != '\0')
		length++;

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return ("failed to allocate memory");

	while (i <= length)
	{
		duplicate[i] = str[i];
		i++;
	}

	return (duplicate);
}
