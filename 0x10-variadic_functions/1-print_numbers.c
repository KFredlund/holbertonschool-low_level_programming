#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - A function that prints numbers
* @separator: the string to be printed between nums
* @n: number of ints passed to function
* Return: Always 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
			printf("%d%s", va_arg(args, unsigned int), separator);
			else
			printf("%d\n", va_arg(args, unsigned int));
		}
	}
	va_end(args);
}
