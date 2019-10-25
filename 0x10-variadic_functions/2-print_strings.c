#include "variadic_functions.h"
#include <stdio.h>
/**
* print_strings - function that prints strings, followed by new line
* @separator: string to be printed between strings
* @n: number of strings
* Return: always 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *tmp;

	va_start(args, n);
	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			tmp = va_arg(args, char *);
			if (tmp)
			{
				if (i != (n - 1))
					printf("%s%s", tmp, separator);
				else
					printf("%s", tmp);
			}
			else
				printf("(nil)");
		}
	}
	va_end(args);
	printf("\n");
}
