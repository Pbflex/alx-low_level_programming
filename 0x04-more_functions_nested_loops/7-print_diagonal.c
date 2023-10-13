#include "main.h"

/**
 * print_diagonal - main function
 *
 * @n: interger value
 * Return: always 0
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, k;

		for (i = 0; i < n; i++)
		{
			for (k = 0; k < i; k++)
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{

	_putchar('\n');
	}
}
