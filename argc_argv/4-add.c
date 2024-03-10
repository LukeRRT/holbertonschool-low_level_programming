#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: number of array
 * @argv: array of character
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;
	char *ptr;
	long num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &ptr, 10);
		if (*ptr != '\0' || num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
