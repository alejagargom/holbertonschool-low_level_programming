#include "holberton.h"
/**
 * print_sign - sense if mom is grater less or equal than 0
 * @MOm: I check if Mm is equal to or greater than is zero or is less than 0
 *
 * Return: 1-positive 0-zero -1-negative
 */
int print_sign(int MOm)
{
	if (MOm < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (MOm == 0)
	{
		_putchar('0');
		return (0);
	}
	if (MOm > 0)
	{
		_putchar('+');
		return (1);
	}
	return (2);
}
