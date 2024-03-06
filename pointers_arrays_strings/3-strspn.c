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

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				length++;
				break;
			}
			accept++;
		}
		if (*accept == '\0')
			break;
		s++;
	}
	return (length);
}
