#include "holberton.h"
/**
* print_most_numbers - a function that prints the nums  0 -9, !2,4
*
* Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}