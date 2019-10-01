#include "holberton.h"
/**
* _puts - a function that prints a string, followed by a
* new line, to stdout
* @str: first integer
* Return: Always 0
*/
void _puts(char *str)
{
	int (*str)[];
	int letter;

	for (letter = 0; str[letter] != '\0'; letter++)
	{
		_putchar(str[letter]);
	}
}
