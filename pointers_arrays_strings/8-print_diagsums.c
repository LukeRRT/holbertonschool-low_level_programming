#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: A pointer to the square matrix of integers
 * @size: The size of the square matrix (number of rows or columns).
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int sum_main_diag = 0;
	int sum_sec_diag = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_main_diag += a[i * size + i];
		sum_sec_diag += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d", sum_main_diag, sum_sec_diag);
}
