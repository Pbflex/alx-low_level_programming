#include "main.h"
#include <string.h>

/**
 * _strncat - main function to concatenate
 *
 * @dest: first value
 * @src: second value
 * @n: Third value
 * Return: ALways 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int j;

	for (j = 0 ; j < n && *src != '\0'; j++)
	{
		dest[len + j] = *src;
		src++;
	}
	dest[len + j] = '\0';
	return (dest);
}
