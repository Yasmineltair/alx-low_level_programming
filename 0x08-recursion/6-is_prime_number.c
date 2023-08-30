#include "stdio.h"

/**
  * is_prime_number -  function that returns
  * 1 if the input integer is a prime number
  * @n: the number to be checked
  * @i: int
  * Return: 0
  */

int check_prime_number(int n, int i);
int is_prime_number(int n)
{
return (check_prime_number(n, 2));
}
/**
  * check_prime_number - function that checks all number < n
  *if they can devide it
  * @n: the number to be checked
  * @i: int
  * Return: int
  */

int check_prime_number(int n, int i)
{
if (i >= n && n > 1)
{
return (1);
}
else if (n % i == 0 || n <= 1)
{
return (0);
}
else
{
	return (check_prime_number(n, i + 1));
}
}
