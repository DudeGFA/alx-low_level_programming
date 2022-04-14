#include "main.h"


/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i;

	int b;

	for (i = 1; i <= 10; i++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
