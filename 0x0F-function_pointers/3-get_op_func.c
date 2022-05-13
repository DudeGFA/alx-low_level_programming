#include "function_pointers.h"
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
	int i;
	op_t *ptr;
	
	ptr = ops;
	i = 0;
	while (i < 5)
	{
		if (ops[i].op == argv[1])
			return (ptr[i].f(argv[0], argv[2]);
	}
	return (NULL);
}
	
