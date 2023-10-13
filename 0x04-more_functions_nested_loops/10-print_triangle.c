#include "main.h"

/**
 * print_triangle - main function
 *@size: interger value
 * Return: always 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
	for (k = 1; k <= i; k++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
