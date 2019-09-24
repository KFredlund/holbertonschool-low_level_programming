#include "holberton.h"
/**
* print_alphabet - function that prints alphabet from a-z
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
