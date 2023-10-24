#include "main.h"

/**
 *_memset - main function
 *
 * @s: first character
 * @b: second character
 * @n: third character
 * Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
