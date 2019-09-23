#include "holberton.h"
/**
* _islower -  checks for lowercase character
* c - integer which holds value to act upon
* Return: 1 if c is lowercarse,
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
