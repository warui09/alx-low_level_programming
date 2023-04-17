#ifndef DOG_H
#define DOG_H

/**
 *struct dog - holds information about a dog
 *@name: name of dog
 *@age: age of dog in years
 *@owner: name of owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
