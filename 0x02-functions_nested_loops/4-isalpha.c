#include "holberton.h"
/**
* _isalpha - function that checks for alphabetic character
* @c: first integer
* Return: 1 if c is a letter, lowercase or uppercase
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
