#include "main.h"

/**
 * times_table - prints times table
 * Return:void
 */

void times_table(void)
{	
	_putchar('0');
	_putchar(',');
	_putchar(' ');
	for(int z = 1; z <= 8; z++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('0');
	}
	_putchar('\n');
	for(int b = 1; b <= 9; b++)
	{
		for(int a = 1; b <= 8; b++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
 			int c = a * b;

			_putchar(c);
			_putchar(',');
			_putchar(' ');
			a++
		}		
		_putchar('c');
		_putchar(\n);
		b++
	}		
 }
		
			
