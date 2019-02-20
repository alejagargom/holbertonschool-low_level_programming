#include "holberton.h"

/**
 * print_alphabet_x10 - print set of a..z x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, z;

	for (a = 0; a < 10; a++)
	{
		for (z = 'a'; z <= 'z'; z++)
		{
			_putchar(z);
		}
		_putchar('\n');
	}
}
