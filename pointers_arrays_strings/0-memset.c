#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: A pointer to the memory area to be filled
 * @b: The constant byte to fill the memory area with
 * @n: The number of bytes to be filled
 *
 * Return: memory area to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
