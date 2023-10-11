#include "main.h"

/**
 * print_alphabet - print alphabet function
 *
 * _putchar - putchar function used to write value
 * Return: always 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}
