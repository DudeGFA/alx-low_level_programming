#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
typedef struct prints_all
{
	char *s;
	void (*print)(va_list arg);
} printer;
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
void print_string(va_list arg)
{
	printf("%s", va_arg(arg, char*));
}
/**
 * print_all - print all parameters
 * @n: no of parameters
 * @separator: string seperating parameters
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *p;
	char *separator = "";
	printer ss[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	
	va_start(ap, format);
	p = va_arg(ap, char*);
	while(format[i])
	{
		j = 0;
		while(j < 4)
			if (format[i] == ss[j].s)
			{
				printf("%s", separator);
				ss[j].print(ap);
				separator = ", ";
			}
			j++;
		i++;
	}
	va_end(ap);
	printf("\n");
}
