#include "hash_tables.h"

/**
  * hash_djb2 - convert string to hash value
  * @str: string wich will be converted
  * Return: unsigned long int hash
  */

unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;

hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash)+c; /* hash * 33 + c */
}
return (hash);
}
