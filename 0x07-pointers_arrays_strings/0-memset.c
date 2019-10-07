#include "holberton.h"
/**
* _memset - Function that fills the first @n bytes of memory
* with a constant byte @b, pointed to by @s
* @s: first char variable
* @b: second char variable
* @n: unsigned integer variable
* Return: A pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
