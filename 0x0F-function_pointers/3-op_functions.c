#include "calc.h"
/**
 * op_add - function that returns sum of @a and @b
 * @a: first int var
 * @b: second int var
 * Return: sum of @a + @b
 */
int op_add(int a, int b)
{
	int sum = (a + b);
	
	return (sum);
}
/**
 * op_sub - function that returns difference of @ and @b
 * @a: first int var
 * @b: second int var
 * Return: difference of @a and @b
 */
int op_sub(int a, int b)
{
	int diff = (a - b);
	
	return (diff);
}
/**
 * op_mul - function that returns the product of @a and @b
 * @a: first int var
 * @b: second int var
 * Return: product of @a and @b
 */
int op_mul(int a, int b)
{
	int prod = (a * b);

	return (prod);
}
/**
 * op_div - function that returns the result of division
 * of @a by @b
 * @a: first int var
 * @b: second int var
 * Return: result of division of @a by @b
 */
int op_div(int a, int b)
{
	int result = (a / b);

	return (result);
}
/**
 * op_mod - function that returns the remainder of teh division of @a by @b
 * @a: first int var
 * @b: second int var
 * Return: remainder of division of @a by @b
 */
int op_mod(int a, int b)
{
	int mod = (a % b);

	return (mod);
}
