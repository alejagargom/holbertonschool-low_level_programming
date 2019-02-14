#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 if it is less it is added if it is greater it is subtracted
 * @luna:
 */
void print_to_98(int luna)
{
	for (; luna < 98; luna++)
	{
		printf("%i, ", luna);
	}
	for (; luna >= 98; luna--)
	{
		if (luna == 98)
			printf("98");
		else
			printf("%i, ", luna);
	}
	printf("\n");
}
