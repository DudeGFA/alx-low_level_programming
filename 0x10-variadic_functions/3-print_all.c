#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - prints a char
 * @ap: list of arguments of variadic function
 */
void print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	printf("%c", c);
}
/**
 * print_int - prints an int
 * @ap: list of arguments of variadic function
 */
void print_int(va_list ap)
{
	int d;

	d = va_arg(ap, int);
	printf("%d", d);
}
/**
 * print_float - prints a float
 * @ap: list of arguments of variadic function
 */
void print_float(va_list ap)
{
	float e;

	e = va_arg(ap, double);
	printf("%f", e);
}
/**
 * print_string - prints a string
 * @ap: list of arguments of variadic function
 */
void print_string(va_list ap)
{
	char *f;

	f = va_arg(ap, char*);
	if (f == NULL)
		printf("(nil)");
	printf("%s", f);
}
/**
 * print_all - print all parameters
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *separator = "";
	printer ss[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);
	while (*(format + i) && format)
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == *(ss[j].sign))
			{
				printf("%s", separator);
				ss[j].print(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
