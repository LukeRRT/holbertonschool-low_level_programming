#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print chessboard
 * @a: pointer array 2D array of character with 8 rows and 8 columns
 *
 * Return: pointer haystack/ NULL
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j];
		}
		printf("\n");
	}
}
