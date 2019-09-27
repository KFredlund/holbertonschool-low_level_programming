#include "holberton.h"
/**
* print_triangle - function that prints a triangle
* @size: size variable of triangle
* Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	int rows;

	for (; size > 0; size--)
	{
		for (rows = 0; rows <= size; rows++)
		{
			if (size > 0)
			{
				_putchar('#');
			}
		}
	_putchar('\n');
	}
}
