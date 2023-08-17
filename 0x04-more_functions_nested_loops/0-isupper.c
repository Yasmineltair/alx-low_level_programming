#include "main.h"
#include <stdlib.h>

/**
  * _isupper - checks for uppercase character
  * @c: the input character
  * Return: return 1 if uppercase else 0
  */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else if (c >= 97 && c <= 122)
	return (0);
}
