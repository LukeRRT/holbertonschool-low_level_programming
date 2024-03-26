#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of command line argument
 * @argv: An array containing the program command line argumnets
 *
 * Return: 0 on success, 98 on incorrect number of arguments,
 * 99 if operator is invalid, 100 if attempted to divide by 0
 */

int main(int argc, char *argv[])
{
	int result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
		return (1);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
		return(1);
	}

	func = get_op_func(argv[2]);
	result = func(atoi(argv[1]), atoi(arcv[3]));

	printf("%d\n", result);

	return (0);
}
