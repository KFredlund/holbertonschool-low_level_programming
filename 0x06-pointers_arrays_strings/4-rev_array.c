#include "holberton.h"
/**
* reverse_array - A function that reverses the content
* of an array of integers
* @a: first integer variable
* @n: second integer variable
* Return: Always 0
*/
void reverse_array(int *a, int n)
{
	int temp, start = 0, end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
