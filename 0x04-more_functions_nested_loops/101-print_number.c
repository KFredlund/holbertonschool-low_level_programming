#include "holberton.h"
/**
* print_number - function that prints an integer
* @n: first integer
* Return: Always 0 (Success)
*/
void print_number(int n)
{

	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}
