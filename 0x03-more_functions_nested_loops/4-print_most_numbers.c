#include "holberton.h"

/**
* print_most_numbers - the fuction that prints - 2and 4
* return : void.
*/
void print_most_numbers(void)
{
	int coco;

	for (coco = '0'; coco <= '9'; coco++)
	{
		if (coco != 50 && coco != 52)
			_putchar (coco);
	}
	_putchar ('\n');
}
