#include "main.h"

/**
 * *_strcat - concatenation two string
 * @dest: first string
 * @src: second string
 *
 * Return: dest after concatenation
 *
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
		*dest++ = *src++;

	*dest = '\0';

	return (temp);
}
