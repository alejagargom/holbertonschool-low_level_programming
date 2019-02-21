#include "holberton.h"
/**
 *print_rev - prints a string in reverse and add a newline
 * @s: string to print
 * Return: no exist
 */
void print_rev(char *s)
{
	int r = 0, lth = 0;

	while (s[lth])
		lth++;

	while ((lth - r - 1) >= 0)
	{
		_putchar(s[lth - r - 1]);
		r++;
	}

	_putchar('\n');
}
