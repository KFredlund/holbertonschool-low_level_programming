#include "variadic_functions.h"
#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
/**
* sum_them_all - function that returns the sum of all
* its parameters
* @n: number of params var
* Return: 0 if @n = 0, otherwise sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	unsigned int sum = 0;

	va_start(vl, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(vl, unsigned int);
	va_end(vl);
	return (sum);
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
