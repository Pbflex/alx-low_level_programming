#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + j % 10);
			putchar(' ');

			/*print the second two digits*/
			putchar('0' + i / 10);
			putchar('0' + j % 10);

		/* check if its not the last combination*/
		if (i != 99 || j != 99)
			/*print comma followed by a space*/
		{
			putchar(',');
			putchar(' ');
		}
		}
	}

	putchar('\n');
	return (0);
}
