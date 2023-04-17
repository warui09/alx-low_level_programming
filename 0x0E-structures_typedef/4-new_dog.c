#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - creates a new dog
 *
 *@name: name of new dog
 *@age: age of new dog
 *@owner: owner of new dog
 *
 *Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	
