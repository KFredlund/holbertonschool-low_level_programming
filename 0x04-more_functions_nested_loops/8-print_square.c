#include "holberton.h"
/**
* print_square - function that prints a square
* @size: variable to hold value of size
* Return: Always 0 (Success)
*/
void print_square(int size)
{
	int down;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; size > 0; size--)
		{
			for (down = 0; down <= size; down++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
