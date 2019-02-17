#include "holberton.h"

/**
 *print_numbers - the fuction that prints the numer
 */
void print_numbers(void)
{
	int coco;

	for (coco = 0; coco <= 9; coco++)
	{
		_putchar(coco + '0');
	}
	_putchar('\n');
}
