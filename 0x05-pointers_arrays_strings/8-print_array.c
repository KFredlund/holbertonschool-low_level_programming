#include "holberton.h"
#include <stdio.h>
/**
* print_array - function that prints n elements of an array of ints
* @a: first int
* @n: second int
* Return: Always 0
*/
void print_array(int *a, int n)
{
	int loop;

	for (loop = 0; loop < n; loop++)
	{
		if (loop != n - 1)
		{
			printf("%d, ", a[loop]);
		}
		else
		{	
			printf("%d", a[loop]);
		}
	}
	printf("\n");
}
