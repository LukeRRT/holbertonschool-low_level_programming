#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string
 *
 * Return: string
 *
 */

char *leet(char *str)
{
	char *ptr = str;
	char *letters = "aeotlAEOTL";
	char *replacements = "430711430711";

	while (*ptr != '\0')
	{
		char *temp = letters;
		char *replacement = replacements;

		while (*temp != '\0')
		{
			if (*ptr == *temp)
			{
				*ptr = *replacement;
				break;
			}
			temp++;
			replacement++;
		}
		ptr++;
	}

	return (str);
}
