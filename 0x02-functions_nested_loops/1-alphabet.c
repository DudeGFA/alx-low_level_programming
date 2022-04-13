#include "main.h"

/**
 * print_alphabet - Entry point
 *prints the alphabet in lower case
 * return: void
 */

void print_alphabet(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}


