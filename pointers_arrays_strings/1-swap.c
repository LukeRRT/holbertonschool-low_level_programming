#include "main.h"

/**
 * swap_int - swap two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
