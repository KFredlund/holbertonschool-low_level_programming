#include "holberton.h"
/**
* _puts_recursion - A function that prints a string
* @s: first char variable input
* Return: Always 0
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(++s);
	_putchar('\n');
}
