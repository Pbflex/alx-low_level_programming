#include "main.h"

/**
 * _islower - islower is the function
 *
 *c - c is the int value
 * _putchar - use to print characters
 *  Write a function that checks for lowercase character
 *  Return: 1 if c is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
