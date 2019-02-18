#include "holberton.h"

/**
 * print_alphabet - prints a-z in lower case
 *
 */
void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
		_putchar('\n');
}
