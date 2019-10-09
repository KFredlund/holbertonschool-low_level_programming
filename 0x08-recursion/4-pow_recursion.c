#include "holberton.h"
/**
* _pow_recursion - A function taht returns the value of x to power y
* @x: first input int var that gets raised to power @y
* @y: second input int var that raises @x to the power of itself
* Return: if @y < 0, returns -1 else returns solution
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y % 2 == 0)
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	else
		return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
