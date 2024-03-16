#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_strdup - copy string to another as parameter
 * @str: string character
 *
 * Return: NULL or character of duplicate
 */

char *_strdup(char *str)
{
	char *duplicate;

	duplicate = malloc((strlen(str) + 1) * sizeof(char));

	if (str == NULL || duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}
