#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>
/**
 * print_numbers - sums all parameters
 * @n: no of parameters
 * @separator: string seperating parameters
 * Return: sum of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int p = 0;

	if (n <= 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		p = va_arg(ap, int);
		printf("%d", p);
		if (i < (n - 1))
			printf("%s", seperator);
	putchar(\n);
	va_end(ap);
	return (p);
}
