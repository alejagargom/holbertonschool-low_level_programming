#include "holberton.h"

/**
 * print_alphabet_x10 - Print with the lowercase code to z 10 times
 *
 */
void print_alphabet_x10(void)
{
	char lowercase_1;
	int cont = 0;

	while (cont < 10)
	{
		for (lowercase_1 = 97 ; lowercase_1 <= 122; lowercase_1++)
		{
			_putchar(lowercase_1);
		}
		cont++;
		_putchar('\n');
	}
}
