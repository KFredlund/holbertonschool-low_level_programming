#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: parameter that counts the number of args
* @argv: Array of pointers to strings
* Return:0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
