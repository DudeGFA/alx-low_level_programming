#include "main.h"

/**
* int print_sign - prints the sign on a number
* @n : character to be checked
* Return: 0 or 1
*/
int print_sign(int n)
{
    if (n >= '0')
        _putchar('+');
        return (1);
    else if (n <= '0')
        putchar('-');
        return (-1);
    else
        putchar('0');
        return (0);

}
