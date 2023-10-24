#include "main.h"

/**
 * _memcpy - main function
 *
 * @dest: first value
 * @src: second value
 * @n: third value
 * Return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int i = n;

	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
