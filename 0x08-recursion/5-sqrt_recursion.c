#include "holberton.h"
/*
* help - A function that helps the sqrt function pass another
* parameter @ result
* @n: first int var
* @result: second int var that holds the result while
* the n var increments to check
* Return: returns the the root of @n
*/
int help(int n, int result)
{
	if (n * n == result)
		return (n);
	else if (n * n > result)
		return (-1);
	else
		return (help(n + 1, result));
}

/**
* _sqrt_recursion - A function that returns the natural square root of n
* @n: input int var to be rooted
* Return: the solution unless n does not have a natural sr
* in which case -1 should be returned
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (help(0, n));
}
