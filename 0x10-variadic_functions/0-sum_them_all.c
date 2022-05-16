#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all parameters
 * @n: no of parameters
 * Return: sum of parameters
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	signed int p = 0;

	if (n <= 0)
		return (0);
	for (i = 0; i < n; i++)
		 p += va_arg(ap, int);
	va_end(ap);
	return (p);
	
}
		
