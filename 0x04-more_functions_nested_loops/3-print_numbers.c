#include "holberton.h"
/**
* print_numbers - function that prints the numbers from 0 - 9
* _putchar - function to print char
* Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
