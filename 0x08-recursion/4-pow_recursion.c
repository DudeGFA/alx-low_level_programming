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
	int p;

	if (d == 0)
		return (1);
	p = x * _pow_recursion(x, d);
	return (p);
}
