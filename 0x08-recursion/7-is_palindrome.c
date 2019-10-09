#include "holberton.h"
/**
* help - Function that helps palindrome function
* to use another parameter
* @s: input char var
* @f: input int var
* @e: input int var
* Return: 1 if palindrome, 0 if not
*/
int help(char *s, int f, int e)
{
	if (f == e)
		return (1);
	if (s[f] != s[e])
		return (0);
	if (f < e + 1)
		return (help(s, f + 1, e - 1));
	return (1);
}
/**
* _strlen_recursion - A function that returns the length of a string
* @s: input char var
* Return: Length of a string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
* is_palindrome - Function that returns 1 if a string is
* a palindrome and 0 if not
* @s: input char var
* Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
		return (1);
	return (help(s, 0, n - 1));
}
