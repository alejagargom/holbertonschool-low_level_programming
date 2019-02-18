#include "holberton.h"

/**
 * times_table - Print value *
  * print_number - print number with _putchar in char 
 * @number: number to be print
 * Return: 0.
 */
void times_table(void)
{
	int n1;
	int n2;
	int output;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			output = n1 * n2;
			if (output < 10 && n2 != 0)
				_putchar(32);
			print_output(output);
			if (n2 < 9)
			{
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar(10);
			}
		}
	}
}

void print_output(int output)
{
	if (output < 10)
	{
		_putchar(output + '0');
	}
	else
	{
		print_output(output / 10);
		print_output(output % 10);
	}
}
