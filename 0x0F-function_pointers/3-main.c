#include "3-calc.h"
/**
 * main - main function
 * @argc: cl argument
 * @argv: cl argument
 */
void main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf(Error\n);
		exit(98);
	}
	if (argv[1] != '+' || argv[1] != '-' || argv[1] != '%' || argv[1] != '/' || argv[1] != '*')
	{
		printf(Error\n);
		exit(99);
	}
	printf("%d\n",get_op_func(char *s)(atoi(argv[0]), atoi(argv[2])));
}
	
