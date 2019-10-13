#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Entry point
* @argc: counts pointers in array argv
* @argv: array of pointers
* Return: 0
*/
int main(int argc, char *argv[])
{
	int a, b, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = 0;
	for (a = 1; a < argc; a++)
	{
		coins += atoi(argv[a]);
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (atoi(argv[b]) < 0)
			{
				printf("0\n");
				return (0);
			}
		}
	}
	printf("%d\n", coins);
	return (0);
}
