#include "main.h"

/**
 * _isalpha - main function to detact alphabet
 *
 * @c: is to determine lowerand uppercase alphabet
 * Task - Write a function that checks for alphabetic character
 * Return: 1 if c is a letter or 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if ( c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
