#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* x - stores the value of the number being parsed
* n - holds the new line character
* c - stores the comma
* s - stores the space
* Return: Always 0 (Success)
*/
int main(void)
{
	long int x;
	int n = '\n';
	int c = ',';
	long int s = ' ';

	for (x = 0; x <= 99; x++)
	{
		if (x != x)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			if (x != 99)
			{
				putchar(c);
				putchar(s);
			}
		}
	}
	putchar (n);
	return (0);
}
