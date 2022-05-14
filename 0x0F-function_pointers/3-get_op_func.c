#include "3-calc.h"
/**
 * get_op_func(char *s) - determines what calc function to execute
 * Return: pointer to function
 */
int (*get_op_func(char *s))(int , int )
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
        {NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++
	}
	printf("Error\n");
	exit(99);
}
	
