#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print all parameters
 * @n: no of parameters
 * @separator: string seperating parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *p;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char*);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if ((i < (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
