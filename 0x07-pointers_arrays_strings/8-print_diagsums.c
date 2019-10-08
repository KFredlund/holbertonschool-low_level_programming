#include "holberton.h"
#include "stdio.h"
/**
* print_diagsums
* @a: first int var
* @size: second int var
* Return: Always 0
*/
void print_diagsums(int *a, int size)
{
	int row, col, back_sum = 0, for_sum = 0;

	for (row = 0; row < size; row++)
	{
		for (col = row; col <= row; col++)
		{
			for_sum += *(a + (row * size + col));
		}
		/* Decincrement row so we go bakcwards*/
		for (col = size - 1 - row; col >= (size - 1) - row; col--)
		{
			back_sum += *(a + (row * size + col));
		}
	}
	printf("%d, %d\n", for_sum, back_sum);
}
