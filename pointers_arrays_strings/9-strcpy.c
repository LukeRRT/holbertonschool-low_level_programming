#include "main.h"

/**
 * *_strcpy - copy the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: buffer point
 * @src: string point
 *
 * Return: nothing
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
