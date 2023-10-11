#include "main.h"

/**
 * print_alphabet - print alpphabet function
 *
 * _putchar - write the value of character
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
			_putchar(i);
	}
}
