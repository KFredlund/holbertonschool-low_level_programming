#include "holberton.h"
/**
* print_chessboard - function that prints the chessboard
* @a: first integer
* Return: Always 0
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < *a[i]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
