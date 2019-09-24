#include "holberton.h"
/**
* times_table - function that prints the 9 times table
*
* Return: Always 0 (Success)
*/
void times_table(void)
{
	int num = 0;
	int by0 = (num * 0);
	int by1 = (num * 1);

	for (num = 0; num <= 9; num++)
	{
		_putchar(by0);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');
	for (num = 0; num <= 9; num++)
	{
		_putchar(by1);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');
}
