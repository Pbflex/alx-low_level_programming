#include "main.h"

/**
 * puts_half - main function
 *
 * @str: character value
 * Return: Always 0
 */

void puts_half(char *str)
{
	int k, i, count = 0;

	for (k = 0 ; str[k] != '\0' ; k++)
		count++;
	i = (count - 1) / 2;
	for (k = i + 1 ; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar('\n');
}
