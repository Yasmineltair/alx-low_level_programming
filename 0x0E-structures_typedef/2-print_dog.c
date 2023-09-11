#include "dog.h"
#include <stdio.h>

/**
  * print_dog -  function that prints a struct dog
  * @d: the dog struct
  * Return: void
  */

void print_dog(struct dog *d)
{
if (d)
{
printf("name: %s\n", d->name ? d->name : "(nil)");
printf("age: %f\n", d->age);
printf("owner: %s\n", d->owner ? d->owner : "(nil)");

}
}
