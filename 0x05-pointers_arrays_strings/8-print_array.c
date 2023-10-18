#include "main.h"
#include <stdio.h>

/**
 * print_array - main function
 *
 * @a: interger value
 * @n: interger value
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
	if (i < n - 2)
		printf(", ");
	}
	printf("\n");
}
