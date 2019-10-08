#include "holberton.h"
#define NULL 0
/**
* _strstr - A function that locates a substring
* @haystack: first char var
* @needle: second char var
* Return: A pointer to the beginning of the located
* substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Compare every haystack to index of needle */
		if (haystack[i] == needle[0])
		{
			/* Sync i and j count while preserving i count */
			j = 0;
			while (haystack[i + j] == needle[j])
			{
				if (needle[j] == '\0')
				{
					return (&haystack[i]);
				}
				j++;
			}
		}
	}
	if (needle[0] == '\0')
		return (haystack);
	return (NULL);
}
