#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenate two strings
 * @s1: frist string
 * @s2: second string
 * @n: max number of character for s2 to concat to s1
 *
 *
 * Return: pointer ptr (s1+s2) if success but if not, return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NUL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	p = malloc((len1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		p[i + j] = s2[j];

	p[i + j] = '\0';

	return (ptr);
}
