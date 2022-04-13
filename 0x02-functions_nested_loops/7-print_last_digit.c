#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n : character to be checked
 * Return: f
 */
int print_last_digit(int n)
{
	int f;

	f = n % 10;
	if (f < 0)
	{
		f = f * -1;
	}
	_putchar(f  + '0');
	return (f);

}
