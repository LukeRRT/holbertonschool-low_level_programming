#include <stdio.h>

/**
 * main - prints number base 16
 *
 * Return: always 0
 */
int main(void)
{

int num;

for (num = 0; num < 16; num++)
{
	if (num < 10)
	{
		putchar(num + '0'); /* prints number 0-9 */
	}
	else
	{
		putchar(num - 10 + 'a'); /* prints letter a-f */
	}
	return (0);
}
}
