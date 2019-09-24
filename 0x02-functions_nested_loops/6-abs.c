#include "holberton.h"
/**
*  _abs - function that computes the absolute value of an integer
* @num: integer variable
* Return: returns value of integer
*/
int _abs(int num)
{
	return ((num < 0) ? (-num) : (num));
}
