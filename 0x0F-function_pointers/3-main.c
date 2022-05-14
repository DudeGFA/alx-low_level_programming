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
		printf(Error\n);
		exit(98);
	}
	if (argv[2] != '+' && argv[2] != '-' && argv[2] != '%' && argv[2] != '/' && argv[2] != '*')
	{
		printf(Error\n);
		exit(99);
	}
	p = get_op_func(char *s)(atoi(argv[1]), atoi(argv[3]))
	printf("%d\n", p);
}
