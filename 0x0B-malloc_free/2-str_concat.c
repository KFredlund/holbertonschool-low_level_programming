#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - Function that concatenates
 * two strings
 * @s1: first char var
 * @s2: second char var
 * Return: Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, n;
	char *both;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\n'; j++)
		;
	j++;
	both = malloc((i + j + 1) * sizeof(char));
	if (both == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		both[k] = s1[k];
	for (n = 0; n < j; n++)
		both[n + k] = s2[n];
	return (both);
}
