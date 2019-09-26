#include "holberton.h"
/**
* print_diagonal - function that draws a diagonal line
* @n: first integer
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	int rows;

	for (; n > 0; n--)
	{
		if (n > 0)
		{
			for (rows = 0; rows <= n; rows++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
