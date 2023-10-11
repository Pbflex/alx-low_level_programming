#include "main.h"

/**
 * print_sign - main function
 *
 * _putchar: display character after compiling
 * @n: charcater used
 * Task - write a function that prints the sign of number
 * Return: -1 if is n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
