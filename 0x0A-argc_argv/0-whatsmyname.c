#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: number of argumnets
 * @argv: array of arguments
 *
 * Return: Alway 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
