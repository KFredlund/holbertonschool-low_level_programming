#include "holberton.h"
/**
* _memcpy - A function taht copies memory area
* @dest: first char variable
* @src: second char variable
* @n: first int variable
* Return: A pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
