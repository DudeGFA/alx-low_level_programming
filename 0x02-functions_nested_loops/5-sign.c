#include "main.h"

/**
* print_sign - prints the sign on a number
* @n : character to be checked
* Return: 0 or 1
*/
int print_sign(int n)
{
	int p;
	
	if (n > 0)
	{
		_putchar('+');
        	p = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		p = -1;
	}
	else
	{
		_putchar('0');
		p = 0;
	}
	return (p);
}
