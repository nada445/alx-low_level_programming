#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - joijlk
 * @s: ijiojioj
 * Return: pointer to a function
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
i = 5;
while (i--)
{
if (ops[i].op[0] == s[0])
return (ops[i].f);
}
return (NULL);
}
