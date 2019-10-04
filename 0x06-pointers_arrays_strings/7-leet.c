#include "holberton.h"
/**
* leet - A function that encodes a string into 1337
* @s: first char variable
* Return: coded string
*/
char *leet(char *s)
{
	int i, j;
	char alpha[100] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int nums[100] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = nums[j];
			}
		}
	}
	return (s);
}
