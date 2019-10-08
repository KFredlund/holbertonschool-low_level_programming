#include "holberton.h"
#define NULL 0
/**
* print_chessboard - function that prints the chessboard
* @a: pointer array
* Return: Always 0
*/
char *_strcpy(char *dest, char *src);
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
		}
	}
}

char *_strcpy(char *dest, char *src)
 {
 	char *strres = dest;

 	if ((dest != NULL) && (src != NULL))
 	{
 		while (*src != NULL)
 		{
 			*dest++ = *src++;
 		}
 		*dest = NULL;
 	}
 	return (strres);
}
