#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: A pointer to the destination memory area where data will be copied
 * @src: A pointer to the source memory area from where data will be copied
 * @n: The number of bytes to be filled
 *
 * Return: memory area to be filled
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
