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
		j = 0;
		while (j < i)
		{
			putchar(' ');
			j++;
		}
	}
}
