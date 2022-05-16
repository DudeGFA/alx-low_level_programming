#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sums all parameters
 * @n: no of parameters
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	long long int p = 0;

	if (n <= 0)
		return (0);
	if (n)
	{
		va_start(ap, n);
		va_arg(ap, int);
		for (i = 0; i < n; i++)
			 p += va_arg(ap, int);
		va_end(ap);
		return (p);
	}
	return (0);
}
