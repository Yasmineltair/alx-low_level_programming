#include "function_pointers.h"

/**
  * get_op_func - function return pointer to op function
  * @s: string
  * Return: pointer to function
  *
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

    while (i < 5)
    {
	    if (s && !s[1] && s[0] == ops[i].op[0])
		    return (ops[i].f);
	    i++;
    }
    return (NULL);
}
