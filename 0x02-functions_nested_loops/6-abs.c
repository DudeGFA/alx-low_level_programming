#include "main.h"

/**
* print_sign - prints the sign on a number
* @n : character to be checked
* Return: 0 or 1
*/
int _abs(int n)
{
	if (n > 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		n = n*(-1);
		_putchar(n);
	}
	else
	{
		_putchar('0');
	}
	return (n);
}
