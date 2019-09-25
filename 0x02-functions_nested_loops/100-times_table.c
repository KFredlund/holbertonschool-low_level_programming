#include "holberton.h"
/**
* print_times_table - function to print out the n times table
* @n: integer storing the value to print
* Return: Always 0 (Success)
*/
void print_times_table(int n)
{
	int i;

	if (n > 15 || n < 0)
	{
		for (i = 0; i <= n; i++)
		{
			break;
		}
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(i);
		}
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');
}
