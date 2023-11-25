#include <stdio.h>
#include "main.h"

/**
 * get_endianness - main function
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int value = 1;
	unsigned char *bytePtr = (unsigned char *)&value;

	return ((bytePtr[0] == 1) ? 1 : 0);
}
