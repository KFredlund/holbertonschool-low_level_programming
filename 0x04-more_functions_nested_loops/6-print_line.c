#include "holberton.h"
/**
* print_line - function that draws a straight line in the terminal
* @n: first integer
* Result: Always 0 (Success)
*/
void print_line(int n)
{
	for (; n > 0; n--)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
