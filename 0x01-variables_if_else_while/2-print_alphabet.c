#include <stdio.h>
/**
* main - Entry point
* x - holds the current letter being parsed
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	printf("\n");
	return (0);
}
