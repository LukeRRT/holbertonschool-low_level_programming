#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locate a character in the string
 * @s: string that need to find character c inside
 * @c: A character to find
 *
 * Return: found character/ NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
