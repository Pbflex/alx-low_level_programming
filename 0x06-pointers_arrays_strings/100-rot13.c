#include "main.h"

/**
 * rot13 - main function used
 *
 * @s: character value
 * Return: Always 0
 */

char *rot13(char *s)
{
	int k;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dataset[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; j < 32; j++)
		{
			if (s[k] == data1[j])
			{
				s[k] = dataset[j];
				break;
			}
		}
	}
	return (s);
}
