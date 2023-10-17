#include "main.h"

/**
 * swap_int - main function
 *
 * @a: interger a
 * @b: interger value
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
