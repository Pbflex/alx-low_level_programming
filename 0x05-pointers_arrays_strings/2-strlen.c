#include "main.h"

/**
 *_strlen - main function
 *
 * @s: interger value
 * Return: Always 0
 */

int _strlen(char *s)
{
	int k;
	int count = 0;

	for (k = 0 ; s[k] != '\0'; k++)
		count++;
	return (count);
}
