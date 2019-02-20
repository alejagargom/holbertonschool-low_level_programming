#include "holberton.h"

/**
 * jack_bauer - prints every min from 00:00 to 23:59.
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int Hr;
	int Mn;

	for (Hr = 0; Hr < 24; Hr++)
	{
		for (Mn = 0; Mn < 60; Mn++)
		{
			_putchar((Hr / 10) + 48);
			_putchar((Hr % 10) + 48);
			_putchar(':');
			_putchar((Mn / 10) + 48);
			_putchar((Mn % 10) + 48);
			_putchar(10);
		}
	}
}
