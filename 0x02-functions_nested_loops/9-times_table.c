#include "main.h"

/**
 * times_table - main function
 *
 * Return: always 0
 */

void times_table(void)
{
	int i, k;

	for (i = 0; i >= 0; i++)
	{
		k = 9 * i;

		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
		_putchar(',');
	}
}
