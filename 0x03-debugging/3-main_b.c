#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * @month: value is 2
 * @day: value is 29
 * @year: value is 2000
 * Return: always 0
 */

int main(void)
{
	int month = 2;
	int day = 29;
	int year = 2000;

	printf("Testing leap year: %02d/%02d/%04d\n", month, day, year);
	print_remaining_days(month, day, year);

	return (0);
}
