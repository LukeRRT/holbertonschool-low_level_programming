#include "main.h"

/**
 * reverse_array - reverse the content in array (integer)
 * @a: array
 * @n: number of elements of array
 *
 * Return: dest after comparison
 *
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
