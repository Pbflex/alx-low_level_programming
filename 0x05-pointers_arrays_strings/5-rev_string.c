#include "main.h"

/**
 * rev_string - main function
 *
 * @s: character value
 * Return: Always 0
 */

void rev_string(char *s)
{
	int n;
	int i;
	int count = 0;

	for (n = 0 ; s[n] != '\0' ; n++)
		count++;
	for (n = 0 ; n < count / 2 ; n++)
	{
		i = s[n];
		s[n] = s[count - 1 - n];
		s[count - 1 - n] = i;
	}
}
