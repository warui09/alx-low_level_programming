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
	dog_t *a;
	int i;

	a = malloc(sizeof(dog_t));
	if (a == NULL)
		return (NULL);

	a->name = malloc(sizeof(name));
	a->owner = malloc(sizeof(owner));
	if (a->name == NULL || a->owner == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		a->name[i] = name[i];
	a->name[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		a->owner[i] = owner[i];
	a->owner[i] = '\0';

	a->age = age;
	return (a);
}
