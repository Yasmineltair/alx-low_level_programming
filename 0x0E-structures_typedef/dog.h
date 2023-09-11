#ifndef MAIN_HEADER
#define MAIN_HEADER

/**
  * struct dog - a dog struct
  * @name: dog's name
  * @age: dog's age
  * @owner: the dog's owner
  */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
