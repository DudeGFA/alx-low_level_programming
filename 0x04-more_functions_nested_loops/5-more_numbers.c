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
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
