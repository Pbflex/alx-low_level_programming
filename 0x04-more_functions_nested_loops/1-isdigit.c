#include "main.h"

/**
 * _isdigit - main function used to determine digit
 *
 * @c: interger value assigned
 * Return: return 1 if is a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
