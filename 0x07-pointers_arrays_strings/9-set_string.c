#include "holberton.h"
/**
* set_string - function that sets the value of a pointer to char
* @s: pointer to a pointer
* @to: char pointer var
* Return: Always 0
*/
void set_string(char **s, char *to)
{
	*s = to;
}
