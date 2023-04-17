#include "dog.h"

/**
 *init_dog - initialize a variable of type struct dog
 *
 *@d: pointer to the struct dog
 *@name: name to assign the initialized dog struct
 *@age: age to initialize dog with
 *@owner: assign this owner to dog struct
 *
 *Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age  = age;
	d->owner = owner;
}
