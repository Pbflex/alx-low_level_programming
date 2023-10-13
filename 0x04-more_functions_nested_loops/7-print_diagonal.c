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
		while (n > 0)
		{
			_putchar('\\');
			n--;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
