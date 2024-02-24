#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - To identifie last digit of random number >5 or =0 or >6 and not 0
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n, last_digit);
	}

	return (0);
}
