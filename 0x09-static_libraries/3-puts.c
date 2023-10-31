#include "main.h"

/**
 *  * _puts - main function
 *   *
 *    * @str: interger value
 *     * Return: Always 0
 *      */

void _puts(char *str)
{
	        int k;

		        for (k = 0 ; str[k] != '\0' ; k++)
				                _putchar(str[k]);
			        _putchar('\n');
}
