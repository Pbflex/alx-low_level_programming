#include "main.h"

/**
 * reverse_array - main function
 *
 * @a: value of interger1
 * @n: value of interger2
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n--; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}
