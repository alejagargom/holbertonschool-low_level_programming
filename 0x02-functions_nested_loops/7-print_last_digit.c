#include "holberton.h"
/**
 * print_last_digit -i print the last digit number
 * @eigth: integer
 *
 * Description: prints my last digit of a number eigth
 *
 * Return: return eigth
 */
int print_last_digit(int eigth)
{
	eigth = eigth % 10;
	if (eigth < 0)
		eigth = eigth * -1;
	_putchar (eigth + '0');
	return (eigth);
}
