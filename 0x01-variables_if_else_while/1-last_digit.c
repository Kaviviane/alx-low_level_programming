#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Determine if the last digit of a random number is
 *greater than or less than 5, or is zero..
(*
 *Return: 0 if success
 */
int main(void)
{
	int n;
	char last[] =  "Last_digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%s %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if (n % 10 == 0)
	{
		printf("%d and is 0\n", n);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
