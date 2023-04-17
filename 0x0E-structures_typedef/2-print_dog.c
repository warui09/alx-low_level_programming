#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - print struct dog
 *
 *@d: struct to print
 *
 *Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("(nil)\n");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	printf("Owner: %s\n", d->owner);
}
