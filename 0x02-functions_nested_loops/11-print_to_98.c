#include "holberton.h"
#include <stdlib.h>
/**
* print_to_98 - function that prints all natural numbers from n to 98
* @n: holds number given in main function
* Return: Always 0 (Success)
*/
void print_to_98(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
