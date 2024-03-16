#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 *
 * Return: pointer arr if success but if not, return NULL
 */

int *array_range(int min, int max)
{
	int size;
	unsigned int *arr;
	unsigned int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
