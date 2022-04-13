#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:void
 */
void jack_bauer(void)
{
	int a = 0;
	
	while (a < 3)
	{
		if (a < 2)
		{
			int b = 0;
				
			while (b < 10)
			{
				int c = 0;
					
				while (c < 6)
				{
					int d = 0;

					while (d < 10)
					{
						_putchar('0' + a);
						_putchar('0' + b);
						_putchar(':');
						_putchar('0' + c);
						_putchar('0' + d);
						_putchar('\n');
						d++;
					}
					c++;
				}
				b++;
			}
			a++;
		}
		else
		{
			int b = 0;

			while (b < 4)
			{
				int c = 0;

				while (c < 6)
				{
					int d = 0;

					while (d < 10)
					{
						_putchar('0' + a);
						_putchar('0' + b);
					 	_putchar(':');
						_putchar('0' + c);
						_putchar('0' + d);
						_putchar('\n');
						d++;
					}
					c++;
				}
				b++;
			}
			a++;
		}
	}
}
	
