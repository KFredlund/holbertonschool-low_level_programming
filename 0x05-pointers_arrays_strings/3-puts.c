#include "holberton.h"
/**
* _puts - a function that prints a string, followed by a
* new line, to stdout
* @str: first integer
* Return: Always 0
*/
void _puts(char *str)
{
	int letter = 0;

	while (str[letter] != '\0')
	{
		_putchar(str[letter]);
		letter++;
	}
	_putchar('\n');
}
