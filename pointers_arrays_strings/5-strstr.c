#include "main.h"

/**
 * *_strstr - locates a substring.
 * @haystack: A pointer to the string in which the substring is to be found.
 * @needle: A pointer to the substring to be located.
 *
 * Return: pointer haystack/ NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i] != '\0' && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return ('\0');
}
