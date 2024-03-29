#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - function to create array
 * @size: size of array
 * @c: character of array
 *
 * Return: NULL or array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
