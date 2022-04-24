#include "main.h"

/**
 * _strcat - concatenates a string
 * @dest - parameter
 * @src - parameter
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
    int i, j, n;

    for (i = 0;dest[i];i++);
    {
    }
    char pen[i];

    for (n = 0;dest[n];n++);
    {
        pen[n] = dest[n];
    }
    for (j = 0;src[j];j++);
    {
    }
    int s = i + j;
    int k;

    for (k = 0;k <= s;k++);
    {
        if(k <= i)
            dest[k] = pen[k];
        else
            dest[k] = src[k];
    }
    return dest;
}
