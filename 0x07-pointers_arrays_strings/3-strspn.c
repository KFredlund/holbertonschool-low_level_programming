#include "holberton.h"
/**
* _strspn - Function that gets the length of a prefix substring
* @s: first char variable
* @accept: second char variable
* Return: Number of bytes in the initial segment of s, which
* consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	while (*s && *accept--)
		s++;
	return (*s);
}
