#include "main.h"
/**
 * print_binary - prints an int in binary
 *
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
    if (n == 0)
    {
        _putchar('0');
        return;
    }
    if ((n / 2) == 0)
    {
        _putchar('1');
    }
    else
    {
        print_binary(n / 2);
        _putchar((n % 2) + '0');
    }
}
