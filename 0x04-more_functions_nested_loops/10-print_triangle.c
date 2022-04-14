#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void main(int size)
{
 	int i = 0;
 	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{	
		while (i <= size)
        	{
			for (j = i; j <= (size - 1); j++)
			{
				_putchar(' ');
			}
			for (k = (size - i); k < j; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
        	}
	}
}
