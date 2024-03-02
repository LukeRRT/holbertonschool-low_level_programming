#include "main.h"

/**
 * *_strncpy - copy string
 * @dest: pointer to destination character array
 * @src: pointer to the source character array
 * @n: n character
 * Return: dest after concatenation
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*src != '\0' && n > 0)
	{
		dest++ = *src++;
		n--;
	}

	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}

	return (temp);
}
