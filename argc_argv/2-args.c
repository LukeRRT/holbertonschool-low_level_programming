#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: number of array
 * @argv: array of character
 *
 * Return: always 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
