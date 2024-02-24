#include <stdio.h>

/**
 * main - prints number 0-9 but with comma and space after all numbers
 *
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
