#include "3-calc.h"

/**
  * main - maiin function
  * @argc: number og arguments
  * @argv: array of arguments
  * Return: always 0
  */

int main(int argc, char **argv)
{
int (*op_func)(int, int), a, b;
char *c;

if (argc != 4)
{
printf("Error\n"), exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
c = argv[2];
op_func = get_op_func(argv[2]);
if (!op_func)
{
printf("Error\n"), exit(99);
}
if (!b && (c[0] ==- '/' || c[0] == '%'))
{
	printf("Error\n"), exit(100);
}
printf("%d\n", op_func(a, b));
return (0);
}
