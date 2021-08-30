#include <stdio.h>
/**
 *main - print the alphabet in lowercase
 *and then in uppercase
 *Return: 0 if success
 */
int main(void)
{
	char c = 'a', C = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
