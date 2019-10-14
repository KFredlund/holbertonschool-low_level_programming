#include "holberton.h"
/**
* print_diagonal - function that draws a diagonal line
* @n: first integer
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	int rows, cols, col2;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (rows = 1; rows <= n; rows++)
		{
			for (cols = 1; cols <= rows; cols++)
				_putchar(' ');
			for (col2 = 1; col2 <= 1; col2++)
				_putchar('\\');
			_putchar('\n');
		}
	}
}
