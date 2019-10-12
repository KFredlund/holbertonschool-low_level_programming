#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* int is_dig(char s[]); */
/**
* main - Entry point
* @argc: counts pointers in array argv
* @argv: array of pointers
* Return: 0
*/
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	if (argc < 0)
	{
		printf("0\n");
	}
	for (a = 1; a < argc; a++)
	{
		sum += atoi(argv[a]);
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!(isdigit(argv[a][b])))
			{
				printf("ERROR\n");
				return (0);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
