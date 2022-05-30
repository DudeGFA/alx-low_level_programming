#include "main.h"
/**
 * save_binary - saves an int in binary
 * @k: parameter
 * @t: parametr
 * @n: parameter
 * Return: void
 */
void save_binary(unsigned long int n, int *k, int t)
{
	if ((n / 2) == 0)
	{
		k[t] = 1;
	}
	else
	{
		save_binary(n / 2, k, t + 1);
		k[t] = n % 2;
	}
}
/**
 * get_binary - prints an int in binary
 * @index: parameter
 * @n: parameter
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int *k;
	int i, t = 0;

	k = malloc(64 * sizeof(int));
	if (k == NULL || index > 63)
		return (-1);
	for (i = 0; i < 64; i++)
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
		save_binary(n / 2, k, t + 1 );
		k[t] = n % 2;
	}
	return(k[index]);
}
