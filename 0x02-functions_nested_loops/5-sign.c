#include "holberton.h"
/**
* print_sign - prints the sign of a number
*
* Return: 1 if n is greater than 0, 0 if its 0, -1 if n is less than 0
*/
int print_sign(int n)
{
	int plus = '+';
	int zero = '0';
	int minus = '-';

	if (n > 0)
	{
		return (1);
		_putchar(plus);
		_putchar(',');
		_putchar(' ');
		_putchar(n);
		_putchar('\n');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(zero);
		_putchar(',');
		_putchar(' ');
		_putchar(n);
		_putchar('\n');
	}
	else
	{
		return (-1);
		_putchar(minus);
		_putchar(',');
		_putchar(' ');
		_putchar(n);
		_putchar('\n');
	}
}
