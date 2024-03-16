#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: the size of memory
 *
 *
 * Return: pointer ptr if success but if not, return fail and exit the programe
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		perror("malloc failed");
		exit(98);
	}
	return (ptr);
}
