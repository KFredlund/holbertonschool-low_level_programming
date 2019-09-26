#include "holberton.h"
/**
* more_numbers - a function that prints 10 times the numbers, 0-14
*
* Return:  Always 0 (Success)
*/
void more_numbers(void)
{
	int round;
	int num;

	for (round = 0; round <= 9; round++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
