#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints a name
 * @name: char pointer var to name
 * @f: pointer to a function that takes the paramter char pointer
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(f)(name);
}
