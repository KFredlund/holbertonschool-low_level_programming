#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: counts pointers in array argv
* @argv: array of pointers
* Return: 0
*/
int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);
	return (0);
}
