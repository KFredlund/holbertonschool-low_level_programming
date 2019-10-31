#include "lists.h"
void first(void) __attribute__ ((constructor));
/**
* first - A function that prints a string before the main file
*
* Return: Always 0
*/
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
