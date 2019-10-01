#include "holberton.h"
/**
* _strlen - function that returns the length of a string
* @s: first integer
* Return: Length of a string
*/
int _strlen(char *s)
{
        int n = 0;

        while (s[n] != '\0')
                n++;

        return (n);
}
