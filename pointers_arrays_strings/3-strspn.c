#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: A pointer to the string whose initial segment length is to be calculated
 * @accept: A pointer to the string containing the characters to be accepted.
 *
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (length);
}
