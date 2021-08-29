#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - Print out a string into stdout.
*Return: 0 if succss.
*/

int main(void)
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if( n>0 )
{
/* if condition is true then print the following */
printf("%d is a positive number \n", n);
}
else if( n<0 )
{
/* if else if condition is true */
printf("%d is a negative number \n", n);
}
else
{
/* if else if condition is true */
printf("0 is neither positive nor negative", n);
}
return (0);
}
