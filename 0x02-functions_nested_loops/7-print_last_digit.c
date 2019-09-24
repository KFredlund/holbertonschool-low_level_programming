#include "holberton.h"
/**
* print_last_digit - function that prints the last digit of a number
* num - stores value for function to act upon
* Return: returns the last value of the digit
*/
int print_last_digit(int num)
{
	int lastDig = (num % 10);

	_putchar(lastDig);
	return (0);
}
