#include "3-calc.h"
/**
 * main - main function
 * @argc: cl argument
 * @argv: cl argument
 */
void main(int argc, char *argv[])
{
	int p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]))
	printf("%d\n", p);
	return (0);
}
