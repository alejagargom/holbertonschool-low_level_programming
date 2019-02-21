#include "holberton.h"
/**
 * puts_half - prints the middle of a string
 * @str: string to edit
 * Return: no exist
 */
void puts_half(char *str)
{
	int lth = 0, hp = 0, r = 0;

	while (str[lth])
		lth++;

	if (lth >= 0)
	{
		hp = lth / 2;

		r = lth - hp;
		while (str[r])
		{
			_putchar(str[r]);
			r++;
		}
		_putchar('\n');
	}
}
