#include "main.h"

/**
 * _strchr - main function
 *
 * @s: first value
 * @c: second value
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int n = 0;

	for (; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (&s[n]);
	}
	return (0);
}
