#include "holberton.h"
#define NULL 0
/**
* _strcat - Function that concatenates two strings
* @dest: first char variable
* @src: second char variable
* Return: A pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int len = 0, loop;

	while (src[len] != '\0')
	{
		len++;
	}
	dest = src;
	for (loop = 0; dest[loop] != '\0'; loop++, len++)
	{
		*src = *dest;
	}
	src[len] = '\0';
	_putchar(*src);
	return (src);
}
