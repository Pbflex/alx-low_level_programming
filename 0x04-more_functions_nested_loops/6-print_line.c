#include "main.h"

/**
 * print_line - main function
 *
 * @n: interger value
 * Return: always 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
		_putchar('_');
		n--;
		}
	}
	_putchar('\n');
}
