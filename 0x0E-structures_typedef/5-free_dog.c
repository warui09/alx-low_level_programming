#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - frees memory allocated to struct dog
 *
 *@d: pointer to struct dog
 *
 *Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
