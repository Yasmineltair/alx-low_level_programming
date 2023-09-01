#include <stdio.h>
#include <stdlib.h>

/**
  * main -  program that prints the minimum number of coins
  * to make change for an amount of money.
  * @argc: number of arguments
  * @argv: array of argument
  * Return: 0 always success
  */

int main(int argc, char *argv[])
{
if (argc == 2)
{
int i;
int leastcents = 0;
int result = atoi(argv[1]);
int cents[] = {25, 10, 5, 2, 1};
for (i = 0; i < 5; i++)
{
	if (result >= cents[i])
	{
		leastcents += result / cents[i];
		result = result % cents[i];
		if (result % cents[i] == 0)
		{
			break;
		}
	}
}
printf("%d\n", leastcents);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
