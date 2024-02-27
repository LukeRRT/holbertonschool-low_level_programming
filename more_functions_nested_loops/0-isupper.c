#include "main.h"

/**
 * _isupper - to check the letter is uppercase or not
 * @c: character of letter
 *
 * Return: return 1 if yes, 0 if not
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
