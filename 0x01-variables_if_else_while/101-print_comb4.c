#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 8 ; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 10 ; k++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar('0' + k);
	if (i != 8 || j != 9 || k != 10)
		{
	{
		putchar(',');
		putchar(' ');
	}
		}
	}
		}
	}
	putchar('\n');
	return (0);
}
