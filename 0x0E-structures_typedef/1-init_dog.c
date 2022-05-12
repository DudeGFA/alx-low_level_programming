#include "dog.h"
/**
 * init_dog - initialises the attributes of struct dog
 * @d: parameter
 * @name: dog's name
 * @age: dog's age
 * @owner: name of dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
