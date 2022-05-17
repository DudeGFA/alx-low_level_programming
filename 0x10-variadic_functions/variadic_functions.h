#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
/**
 * struct prints_all - prints_all
 * @sign: represents data type
 * @print: a pointer function
 */
typedef struct prints_all
{
	char *sign;
	void (*print)(va_list ap);
} printer;
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* variadic_functions.h */
