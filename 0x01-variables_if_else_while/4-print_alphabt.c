#include <stdio.h>
/**
* main - Entry point
* x - stores alphabet value currently being parsed
* n - stores new line character
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	char n = '\n';

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar(n);
	return (0);
}
