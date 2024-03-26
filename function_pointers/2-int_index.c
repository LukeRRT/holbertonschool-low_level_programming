#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - to find number of integer
 * @array: array
 * @size: size of number of array
 * @cmp: pointer to function to compare integer
 *
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
