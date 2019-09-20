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
	long int y;
	int n = '\n';
	int c = ',';
	long int s = ' ';

	for (x = 1; x <= (1 << 9); x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if ((1 << y) & x)
				putchar((y / 10) + '0');
				putchar ((y % 10) + '0');
				if (y != 789)
				{
					putchar(c);
					putchar(s);
				}
		}
	}
	putchar(n);
	return (0);
}
