#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11

/**
 * main - main function
 *
 * @i: interger value
 * Return: always 0
 */


int main(void)
{
	int i;
	int index;
	srand(time(NULL));
	char password[PASSWORD_LENGTH];
	const char charset[] = "aA-zZ0123456789";

	srand((unsigned int)(time(0)));

		for (i = 0; i < PASSWORD_LENGTH - 1; i++)
		{
		index = rand() % (sizeof(charset) - 1);
			password[i] = charset[index];
		}
	password[PASSWORD_LENGTH - 1] = '\0';
	printf("%s\n", password);
	return (0);
}
