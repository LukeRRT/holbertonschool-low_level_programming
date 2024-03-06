#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing the set of bytes to search for.
 *
 * Return: string that matched with *accept/ NULL if none match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
