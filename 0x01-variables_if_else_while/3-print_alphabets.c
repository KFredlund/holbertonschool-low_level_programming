#include <stdio.h>
/**
* main - Entry point
* x - holds the letter currently being parsed
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	printf("\n");
	return (0);
}
