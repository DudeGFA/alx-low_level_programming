#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 2, next, sum = 2;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if ((next % 2) == 0)
    			sum += next;
		
	}
	printf("%lu", sum);
	putchar('\n');
	return (0);
}
