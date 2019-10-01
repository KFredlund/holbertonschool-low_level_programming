#include "holberton.h"
#define NULL 0
/**
* _strcpy - function that copies the string pointed to by src, including
* the terminating NULL byte, to the buffer pointed to by dest
* @dest: buffer pointed to by dest
* @src: points to a string that needs to be copied
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	char *strres = dest;

	if ((dest != NULL) && (src != NULL))
	{
		while (*src != NULL)
		{
			*dest++ = *src++;
		}
		*dest = NULL;
	}
	return (strres);
}
