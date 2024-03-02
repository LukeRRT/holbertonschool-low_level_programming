#include "main.h"

/**
 * *_strncat - concatenation two string
 * @dest: first string
 * @src: second string
 * @n: most n bytes from src
 *
 * Return: dest after concatenation
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	*dest = '\0';

	return (temp);
}
