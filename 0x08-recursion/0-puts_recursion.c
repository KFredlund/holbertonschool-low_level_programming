#include "holberton.h"
/**
* _puts_recursion - A function that prints a string
* @s: first char variable input
* Return: Always 0
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
		_putchar('\n');
	return;
}	
