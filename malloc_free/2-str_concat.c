#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL or concatenate with two strings
 */

char *str_concat(char *s1, char *s2)
{
	size_t i = 0;
	size_t j = 0;
	size_t k = 0;
	size_t len_s1 = 0;
	size_t len_s2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}

	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	result = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		result[k] = s1[i];
		k++;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		result[k] = s2[j];
		k++;
	}

	result[k] = '\0';

	return (result);
}
