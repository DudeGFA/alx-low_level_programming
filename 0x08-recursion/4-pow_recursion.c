#include "main.h"
/**
 * _pow_recursion - returns x^y
 * @x: parameter
 * @y: parameter
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	int p;

	if (y == 0 )
		return (1);
	y = y - 1;
	p = x * _pow_recursion(x, y);
	return (p);
}
