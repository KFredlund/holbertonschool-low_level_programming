#include "holberton.h"
/**
* puts2 - function that prints every other character of a string
* starting with the first character
* @str: first integer
* Return: Always 0
*/
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
		index++;
	}
	_putchar('\n');
}
