#include <stdio.h>
#include "main.h"

/**
 * _atoi - main function
 *
 * @s: value of character
 * Return: Always 0
 */

int _atoi(char *s)
{
	int k = 1;
	int n = 0;
	int i = 0;

	if (s[0] == '-')
	{
		k = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
		}
		else
		{
		break;
		}
		i++;
		}
		return n * k;
}
