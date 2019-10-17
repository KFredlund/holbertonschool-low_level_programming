#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Function that concatenates two strings
 * @s1: first char var
 * @s2: second char var
 * @n: int var
 * Return: Pointer to a newly allocated space in mem or
 * or NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	j++;
	if (n >= j)
		n = j - 1;
	str = malloc(sizeof(char) * (i + n + 1));
	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (l = 0; l < n; l++)
		str[l + k] = s2[l];
	str[n + i] = '\0';
	return (str);
}
