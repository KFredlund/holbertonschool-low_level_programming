#include "holberton.h"
/**
* rev_string - function that reverses a string
* @s: first integer
* Return: Always 0
*/
void rev_string(char *s)
{
	int c, len = 0;
	char *begin, *end, temp;

	while (s[len] != '\0')
	{
		len++;
	}
	begin = s;
	end = s;
	for (c = 0; c < len - 1; c++)
	{
		end++;
	}
	for (c = 0; c < len / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
