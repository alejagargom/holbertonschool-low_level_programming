#include "holberton.h"

/**
 *print_last_digit - function to determine last digit
 *@n: integer
 *
 *Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n >= 0)
	{
		r = n % 10;
	}
	else
	{
		r = -n % 10;
	}
	_putchar (r + '0');
	return (r);
}
