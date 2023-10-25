#include "main.h"

/**
 * print_chessboard - main function
 *
 * @a: character 1
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int k;
	int j;

	for (k = 0; k < 8; k++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[k][j]);
		_putchar('\n');
	}
}
