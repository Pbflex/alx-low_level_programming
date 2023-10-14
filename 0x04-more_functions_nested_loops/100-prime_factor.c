#include <stdio.h>
#include <math.h>

/**
 * main - main function
 *
 * Return: always return 0
 */

int main(void)
{
	long largestPrimeFactor = 0;
	long num = 612852475143;
	long div = 2;

	while (num != 1)
	{
		if (num % div == 0)
		{
			largestPrimeFactor = div;
			num /= div;
			while (num % div == 0)
		{
			num /= div;
		}
	}
	div++;
}
	printf("%ld\n", largestPrimeFactor);
	return (0);
}
