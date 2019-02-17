#include "holberton.h"

/**
 * print_alphabet  - Print with the lowercase code to z
 *
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 97 ; lowercase <= 122; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
