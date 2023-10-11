#include "main.h"

/**
 * print_last_digit - main function
 *
 * @n: this is the initialized value
 * Write a function that print the last digit of a number
 * Return: always 0
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (n < 0)
	{
		l = -n % 10;
	}
		_putchar(l + '0');
		return (l);
}
