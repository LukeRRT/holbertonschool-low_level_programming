#include <stdio.h>

/**
 * main - prints all numbers base 10
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}

	printf("\n");

	return (0);
}
