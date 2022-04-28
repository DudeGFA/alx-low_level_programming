
#include "main.h"
/**
 * prime - determines if @a is a prime number
 * @a: parameter
 * @b: parameter
 * Return: 0 or 1
 */
int prime(int a, int b)
{
	if (a <= 1)
	{
		return (0);
	}
	if (b < a)
	{
		if ((a % b) == 0)
			return (1);
		b = b + 1;
		return (prime(a, b));
	}
	return (0);
}
/**
 * is_prime_number - determines if @n is a prime number
 * @n: parameter
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
