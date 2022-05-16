#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print all parameters
 * @n: no of parameters
 * @separator: string seperating parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int p;

	if (n >= 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			p = va_arg(ap, int);
			printf("%d", p);
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(ap);
	}
}
