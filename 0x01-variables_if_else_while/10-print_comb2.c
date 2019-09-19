#include <stdio.h>
/**
* main - Entry point
*
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
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		if (x != 99)
		{
			putchar(c);
			putchar(s);
		}
	}
	putchar(n);
	return (0);
}
