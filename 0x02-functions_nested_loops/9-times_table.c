#include "holberton.h"
/**
* times_table - function that prints the 9 times table
*
* Return: Always 0 (Success)
*/
void times_table(void)
{
	int across;
	int down;

	for (across = 0; across <= 9; across++)
	{
		_putchar('0');
		for (across = 0; across <= 9; across++)
		{
			_putchar(across);
			for (down = 1; down <= 9; down++)
			{
				_putchar('\n');
				_putchar(down);
				for (across = 0; across <= 9; across++)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(down * across + '0');
				}
			}
		}
	}
	_putchar('\n');
}
