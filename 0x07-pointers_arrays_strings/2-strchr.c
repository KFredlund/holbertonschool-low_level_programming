#include "holberton.h"
#define NULL 0
/**
* _strchr - A function that locates a character in a string
* @s: first char variable
* @c: second char variable
* Return: A pointer to the first occurance of the character c in s
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (!*s)
		{
			return (NULL);
		}
	}
	return (NULL);
}
