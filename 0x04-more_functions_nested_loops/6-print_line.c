#include "main.h"

/**
 * print_line - prints _
 * @n : paramater depicting no of '_'
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
