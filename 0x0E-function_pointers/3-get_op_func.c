/* select and run the required function */
#include "3-calc.h"

/**
 * get_op_func - chose function based on symbol passed
 * @s: symbol passed
 *
 * Return: function that accepts two ints and returns int
 */
int (*get_op_func(char *s))(int, int)
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

	i = 0;
	while (ops[i].f)
	{
		i++;
		if (*ops[i].op == *s)
			return (ops[i].f);
	}
	return (NULL);
}
