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
	int i = 0;
	int j = 0;

	char *letters = "aAeEoOtTlL";
	char *replacements = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;

		while (j < 10)
		{
			if (str[i] == letters[i])
			{
				str[i] = replacements[i];
			}
			j++;
		}
		i++;
	}
	return (str);
}
