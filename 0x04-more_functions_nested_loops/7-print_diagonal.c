#include "main.h"

/**
 * print_diagonal - prints '\'
 * @n : paramater depicting no of '\'
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
	}
}
