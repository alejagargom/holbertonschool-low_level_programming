#include "holberton.h"

/**
 *print_last_digit - determine and print last digit
 *@n: number to calculate
 *
 *Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int output;

	output = n % 10;
	output = output >= 0 ? output : -output;
	_putchar(output + 48);
	return (output);
}
