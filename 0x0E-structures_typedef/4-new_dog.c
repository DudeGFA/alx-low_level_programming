#include "dog.h"
#include <stdlib.h>
/**
 * dog_t *new_dog - function that creates a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL || !(name) || !(owner) || !(age))
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	if (ptr->name == NULL || ptr->age == NULL || ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->age);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
