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
	printf("%d\n", argc - 1);
	return (0);
}
