#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*Description of function main - this is the main block */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("n is: %d\n", n);

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
		return (0);
}
