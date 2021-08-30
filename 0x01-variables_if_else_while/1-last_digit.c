#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Print out a string into stdout.
 *Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if
	{
		printf("%d Last digit of\n", n);
	}
	if
	{
		printf("%d is\n", n);
	}
	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	if (n == 0)
	{
		printf("%d and is o\n", n);
	}
	if ((n < 6) ! 0)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
