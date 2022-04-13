#include "main.h"

/**
 * main - print_alphabet_x10
 * prints the alphabet 10 times
 * return (void)
 */

void print_alphabet_x10(void)
{
	int m = '1';
	
	while ( m <= 10)
	{
		char c = 'a';

		while (c <= 'z')
   		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	m++;
	}
}

