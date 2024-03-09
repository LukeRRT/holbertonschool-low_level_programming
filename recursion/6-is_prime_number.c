#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * is_divisible - recursively determine if a given number n
 * @num: the number being checked for divisibility.
 * @divisor: the number by which we are checking if n is divisible.
 *
 * Return: 1, otherwise, it returns 0.
 */

int is_divisible(int num, int divisor)
{
	if (num % divisor == 0)
		return (0);
	if (divisor == num / 2)
		return (1);
	return (is_divisible(num, divisor + 1));
}

/**
 * is_prime_number - determine whether the input integer
 * n is a prime number.
 * @n: integer number
 *
 * Return: Check if n is divisible by any number less than
 * or equal to its square root
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
