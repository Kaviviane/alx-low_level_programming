#include <stdio.h>
/**
 *main - print alphabet in lowercase except letters q and e.
 *Return: 0 if success
 */
int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
	
		
	
