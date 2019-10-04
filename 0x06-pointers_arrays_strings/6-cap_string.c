#include "holberton.h"
/**
* cap_string - A function that capitalizes all words of a string
* @s: first char variable
* Return: a capitalized array of words
*/
char *cap_string(char *s)
{
	int c = 0;

	for (; s[c] != '\0'; c++)
	{
		if (s[c]>= 'a' && s[c] <= 'z')
		{
			s[c] = s[c] - 32;
		}
	}
	return (s);
}
