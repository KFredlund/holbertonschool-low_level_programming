#include "holberton.h"
/**
* print_number - function to print an integer
* @n: first integer
* Return: Always 0
*/
void print_number(int n)
{
	if (n > 0 && n <= 9)
	{
		_putchar(n);
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 99 && n <= 999)
	{
		_putchar(n / 100 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 0)
	{
		n = n * n;
		_putchar('-');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar('0');
	}
}
