#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string
 * @str: string to adjust
 * Return: no exist
 */
void puts2(char *str)
{
	int r = 0;

	while (str[r])
	{
		if (!(r % 2))
		{
			_putchar(str[r]);
		}
		r++;
	}
	_putchar('\n');
}
