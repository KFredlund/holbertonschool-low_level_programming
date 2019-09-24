#include "holberton.h"
/**
* print_alphabet_x10 - function to print the alphabet ten times
*
*/
void print_alphabet_x10(void)
{
	int round;
	int letter;

	for (round = 0; round <= 9; round++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
