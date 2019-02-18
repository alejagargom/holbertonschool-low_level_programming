#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98  - print numbers n to 98
 * @n: number to calculate
 *
 * Return: print to output numbers n to 98 followed and a newline.
 */
void print_to_98(int n)
{
	int cal;

	if (n > 98)
	{
		for (cal = n; cal > 97; cal--)
		{
			printf("%d", cal);
			if (cal != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (cal = n; cal < 99; cal++)
		{
			printf("%d", cal);
			if (cal != 98)
			{
				printf(", ");
			}
		}

	}
	printf("\n");
}
