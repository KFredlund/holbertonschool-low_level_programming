#include "holberton.h"
/**
* wildcmp - A function that compares two strings
* @s1: the first string input
* @s2: the second string input
* Return: 1 if the strings are identical, else 0
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 != '\0' && *s1 != *s2)
		return wildcmp(s1, s2 + 1);
	if (*s1 == '*')
		return wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1);
	return (0);
}
