#include "main.h"

/**
 * print_number - helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 **/

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
		{
		_putchar('-');
		m = -n;
		}
	else
		m = n;
	if (m / 10)
		print_number(m / 10);

_putchar((m % 10) + '0');
}

/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 **/

int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int j;

	if (i < 0)
	{
		j = i * -1;
	}
	else
	{
		j = i;
	}
	while (j != 0)
	{
		j /= 10;
		d++;
	}
return (d);
}
