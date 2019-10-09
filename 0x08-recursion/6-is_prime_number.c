#include "holberton.h"
/**
* help - Function that helps prime function to use two params
* @n: first input var
* @i: second input var
* Return: 1 if result is prime, 0 otherwise
*/
int help(int n, int i)
{
	if (n == i)
		return (1);
	else if (i % n == 0)
		return (0);
	else
		return (help(n + 1, i));
}


/**
* is_prime_number - Function that returns 1 if the input
* int is a prime number
* @n: Input int var
* Return: 1 if true, otherwise 0
*/
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n <= 1)
		return (0);
	return (help(2, n));
}
