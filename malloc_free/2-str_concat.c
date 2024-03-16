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
	size_t len_s1 = 0;
	size_t len_s2 = 0;

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

	char *result = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		result[i] = s1[i];
	for (j = 0; j < len_s2; j++)
		result[len_s1 + j] = s2[j];

	result[len_s1 + len_s2] = '\0';

	return (result);
}
