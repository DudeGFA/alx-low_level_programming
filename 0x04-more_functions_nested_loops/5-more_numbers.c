#include "main.h"

/**
 *more_numbers - prints numbers
 */
void more_numbers(void)
	int i;
	int b;
	for (i = 1; i <= 10; i++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar('0' + b);
		}
		_putchar('\n');
	}
