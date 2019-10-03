#include "holberton.h"
/**
* string_toupper - A function that changes all lowercase
* letters of a string to uppercase
* @s: first char variable pointer
* Return: an uppercase string
*/
char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			s[c] = s[c] - 32;
		}
		c++;
	}
	return (s);
}
