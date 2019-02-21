#include "holberton.h"
/**
 * _puts - prints a string and add newline to stdout
 * @str: print to stdout
 * Return: no exist
 */
void _puts(char *str)
{
	int r = 0;
	while (str[r])
	{
		_putchar(str[r++]);
	}
	_putchar('\n');
}
