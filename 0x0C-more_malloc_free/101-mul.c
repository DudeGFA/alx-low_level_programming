#include "main.h"
#include "stdio.h"
/**
 * main - multiplies two strings
 * @argc: no of cl arguments
 * @argv: array of cl arguments
 * Return: 0
 */
int main (int argc, char* argv[])
{
	int i, j;
	unsigned long num;

	if (argc != 3)
		printf("ERor\n");
	for ( i = 0;i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
	num = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", num);
	return (0);
}
