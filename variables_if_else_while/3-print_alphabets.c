#include <stdio.h>

/**
 * main - prints all alphabet in lowercase a-z follow by
 * uppercase A-Z and end with newline
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'a';
	char letter_upper = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (letter_upper <= 'Z')
	{
		putchar(letter_upper);
		letter_upper++
	}

	putchar('\n');

	return (0);
}
