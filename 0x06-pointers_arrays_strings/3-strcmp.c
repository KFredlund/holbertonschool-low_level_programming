#include "holberton.h"
/**
* _strcmp - A function that compares two strings
* @s1: first char variable - string 1
* @s2: second char variable - string 2
* Return: comparison value
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
