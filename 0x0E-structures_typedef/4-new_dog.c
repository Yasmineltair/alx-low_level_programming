#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strlength - get the size of string
  * @s: string
  * Return: size
  */

int _strlength(char *s)
{
int size;
for (size  = 0; s[size] != '\0'; size++)
;
return (size);
}

/**
  * _strcopy - function to copy string
  * @dest: destination string
  * @src: source string
  * Return: dest
  */

char *_strcopy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
	dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
  * new_dog - function that creates a new dog.
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: struct pointer
  */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (!name || age < 0 || !owner)
	return (NULL);
dog = (dog_t *)malloc(sizeof(dog_t));
if (dog == NULL)
	return (NULL);
dog->name = malloc(sizeof(char) * (_strlength(name) + 1));
if ((*dog).name == NULL)
{
	free(dog);
	return (NULL);
}
dog->owner = malloc(sizeof(char) * (_strlength(owner) + 1));
		if ((*dog).owner == NULL)
		{
		free(dog->name);
		free(dog);
		return (NULL);
		}
		dog->name = _strcopy(dog->name, name);
		dog->age = age;
		dog->owner = _strcopy(dog->owner, owner);
		return (dog);
}
