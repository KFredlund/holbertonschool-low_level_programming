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
	int coin_cnt = 0, cents, i;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	cents = atoi(argv[1]);
	for (i = 0; i < 5;)
	{
		if (cents >= coins[i])
		{
			cents -= coins[i];
			coin_cnt++;
		}
		else
			i++;
	}
	printf("%d\n", coin_cnt);
	return (coin_cnt);
}
