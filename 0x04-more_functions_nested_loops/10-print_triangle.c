#include "holberton.h"
/**
* print_triangle - function that prints a triangle
* @size: size variable of triangle
* Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
