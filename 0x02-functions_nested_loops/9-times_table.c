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
	int z = 1
	while(z <= 8;)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('0');
		z++
	}
	_putchar('\n');
	int b = 1;
	for(b <= 9)
	{
		int a = 1; 
		for(a <= 8)
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
		_putchar('\n');
		b++
	}		
 }
		
			
