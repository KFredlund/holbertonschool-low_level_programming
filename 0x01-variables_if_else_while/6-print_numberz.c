#include <stdio.h>
/**
* main - Entry point
* x - stores value of number being parsed
* n - stores new line character
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	int n = '\n';

	for (x = 0; x <= 9; x++)
	{
		putchar(x);
	}
	putchar(n);
	return (0);
}
