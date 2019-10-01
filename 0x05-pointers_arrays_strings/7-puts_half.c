#include "holberton.h"
/**
* puts_half - function that prints half a string
* @str: string input
* Return: always 0
*/
void puts_half(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str % 2 == 0)
		{		
			_putchar(str[index]);
			index++;
		}
	}
	_putchar('\n');
}
