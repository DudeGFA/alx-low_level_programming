#include "main.h"

/**
 * times_table - prints times table
 * Return:void
 */
void times_table(void)
{
	int z = 1;
	int b = 1;
	
	while(z <= 8)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('0');
		z++;
	}
	_putchar('\n');
	while(b <= 9)
	{
		int a = 1;
		int c = a * b;
		while(a <= 8)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
 			_putchar('0' + c);
			_putchar(',');
			_putchar(' ');
			a++;
		}		
		_putchar('0' + c);
		_putchar('\n');
		b++;
	}		
 }
		
			
