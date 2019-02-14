#include "holberton.h"

/**
 * times_table - printing the columns and rows
 *
 */
void times_table(void)
{
	int fil, colmu, finish;

	for (fil =  0 ; fil <= 9; fil++)
	{
		for (colmu = 0 ; colmu <= 9; colmu++)
		{
			finish = fil * colmu;
			if (finish < 10)
			{
				if (colmu != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(finish + '0');
			}
			else
			{
				_putchar (',');
				_putchar(' ');
				_putchar((finish / 10) + '0');
				_putchar((finish % 10) + '0');
			}
		}
		_putchar ('\n');
	}
}
