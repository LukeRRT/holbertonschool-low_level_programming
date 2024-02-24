#include <stdio.h>

/**
 * main - prints all alphabet in lowercase a-z but reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
