#include "holberton.h"
/**
* _strncat - A function that concatenates two strings
* @dest: first char variable
* @src: second char variable
* @src: third char variable
* @n: first integer variable
* Return: A pointer to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
