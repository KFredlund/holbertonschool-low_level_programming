#include "holberton.h"
/**
* rev_string - function that reverses a string
* @s: first integer
* Return: Always 0
*/
void rev_string(char *s)
{
	char r[1000];
	int begin, end, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	end = len - 1;
	for (begin = 0; begin < len; begin++)
	{
		r[begin] = s[end];
		end--;
	}
	r[begin] = '\0';
}
