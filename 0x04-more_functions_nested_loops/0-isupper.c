#include "main.h"

/**
 *_isupper - main function to check uppercase
 *
 * @c: interger value used
 * Return: return1 1 if uppercase or otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
