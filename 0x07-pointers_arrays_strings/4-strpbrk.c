#include "holberton.h"
#define NULL 0
/**
* _strpbrk - A function that searches a string for any of
* a set of bytes
* @s: first char var
* @accept: second char var
* Return: A pointer to the byte in s that matches one
* of the buytes in accept, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
