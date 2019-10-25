#include "variadic_functions.h"
#include <stdio.h>
/**
* print_all - Function that prints anything
* @format: a list of types of arguments passed
* Return: Always 0
*/
void print_all(const char * const format, ...)
{
	va_list args;
	const char *p = format;
	char *sval;

	va_start(args, format);
	while (*p)
	{
		switch (*p++)
		{
			case 'c':
				printf("%c, ", va_arg(args, int));
				break;
			case 'i':
				printf("%d, ", va_arg(args, int));
				break;
			case 's':
				sval = va_arg(args, char *);
				if (sval == NULL)
					printf("(nil)");
					break;
				printf("%s", sval);
				break;
			default:
				break;
		}
	}
	va_end(args);
	printf("\n");
}
