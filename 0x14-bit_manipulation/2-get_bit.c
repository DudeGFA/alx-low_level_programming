#include "main.h"
/**
 * print_binary - prints an int in binary
 *
 * @n: parameter
 */
void save_binary(unsigned long int n, int *k, int t)
{
    if ((n / 2) == 0)
    {
        k[t] = 1;
        return;
    }
    else
    {
        save_binary(n / 2, k, t + 1);
        k[t] = n % 2;
    }
}
int get_bit(unsigned long int n, unsigned int index)
{
    int *k;
    int i, t = 0;

    k = malloc(32 * sizeof(int));
    if (k == NULL)
        return (-1);
    for (i = 0; i < 32; i++)
        k[i] = 0;
    if (n == 0)
    {
        return (0);
    }
    if ((n / 2) == 0)
    {
        k[t] = 1;
    }
    else
    {
        save_binary(n / 2, k, t + 1);
        k[t] = n % 2;
    }
    return(k[index]);
}
