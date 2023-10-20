#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * 
 * @c: The character to print
 * Return: On success of 1
 * On error, -1 returned and error is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
