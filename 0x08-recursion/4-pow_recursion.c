#include "main.h"
/**
 * _pow_recursion - returns x^y
 * @x: parameter
 * @y: parameter
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	int d = y - 1;
	
	if (d == 1)
		return (x);
	int p = x * _pow_recursion(int x, int d);
	return(p);
}
