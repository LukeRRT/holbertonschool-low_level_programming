#include <stdio.h>

/**
 * main - prints all number base 10 but only use putchar
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');

	putchar('\n');

	return (0);
}
