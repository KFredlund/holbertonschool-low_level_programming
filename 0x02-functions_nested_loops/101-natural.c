#include <stdlib.h>
#include "holberton.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long int num;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 || num % 5)
		{
			num = num + num;
		}
	putchar(num / 1000 + '0');
	putchar(num % 1000 + '0');
	putchar('\n');
	}
	return (0);
}
