#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if( n>0 ) {
/* if condition is true then print the following*/
	printf("%d is a positive number \n", n);
}
else if( n<0 ) {
/* if else if condition is true */
	printf("%d is a negative number \n", n);
}
else {
/* if else if condition is true */
	printf("0 is neither positive nor negative", n);
}
return (0);
}
