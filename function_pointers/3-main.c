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
	int num1, num2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
		return (99);

	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
