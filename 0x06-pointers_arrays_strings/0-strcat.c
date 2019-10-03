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
	char *hold = dest;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (loop = 0; src[loop] != '\0'; loop++, len++)
	{
		dest[len] = src[loop];
	}
	dest[len + 1] = '\0';
	return (hold);
}
