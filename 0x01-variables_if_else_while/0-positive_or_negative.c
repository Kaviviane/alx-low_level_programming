#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if( n>0 ) {
		/* if condition is true then print the following*/
		printf("Value of n is positive\n");
	}
	else if( n==0 ) {
		/* if else if condition is true */
		printf("Value of n is zero\n");
	}
	else if( n<0 ) {
		/* if else if condition is true */
		printf("Value of n is negative\n");
	}
	return (0);
}
