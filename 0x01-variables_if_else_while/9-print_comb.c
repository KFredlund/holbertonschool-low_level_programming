#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	int n = '\n';
	long int c = ',';
	long int s = ' ';

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x != '9')
		{
			putchar(c);
			putchar(s);
		}
	}
	putchar(n);
	return (0);
}
