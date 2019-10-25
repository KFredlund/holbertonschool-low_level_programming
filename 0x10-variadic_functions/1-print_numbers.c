#include "variadic_functions.h"
#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
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
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
