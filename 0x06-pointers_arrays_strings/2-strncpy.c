#include "main.h"

/**
 * _strncpy - main function
 *
 * @dest: value 1
 * @src: value 2
 * @n: value 3
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0 ; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
