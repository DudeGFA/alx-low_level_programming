#include "main.h"

/**
 * print_diagonal - prints '\'
 * @n : paramater depicting no of '\'
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		for(j = 0; j = i;)
			_putchar(' ');
	}
}
