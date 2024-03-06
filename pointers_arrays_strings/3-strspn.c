#include "main.h"

/**
 * *_strchr - locate a character in the string
 * @s: A pointer to the string whose initial segment length is to be calculated
 * @accept: A pointer to the string containing the characters to be accepted.
 *
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *ptr;

	while (*s != '\0')
	{
		*ptr = accept;
		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				length++;
				break;
			}
			ptr++;
		}
		if (*ptr == '\0')
			break;
		s++;
	}
	return (length);
}
