#include "main.h"

/**
 * times_table - main function
 *
 * Return: always 0
 */

void times_table(void)
{
	int i, j,  k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
		k = i * j;
		if ( k <= 9)
		{
			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		else
		{
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
		_putchar(' ');
	
		if ( j != 9)
		{
			_putchar(',');
		}
		}
		}
		_putchar('\n');
	}

	_putchar('\n');
}
