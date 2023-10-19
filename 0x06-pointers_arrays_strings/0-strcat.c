#include "main.h"

/**
 * _strcat - main function
 *
 * @dest: character value 1
 * @src: character value 2
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0'; i++)
		destlen++;
	{
		for (i = 0 ; src[i] != '\0'; i++)
			srclen++;
		for (i = 0 ; i <= srclen ; i++)
			dest[destlen + i] = src[i];
	}
		return (dest);
}
