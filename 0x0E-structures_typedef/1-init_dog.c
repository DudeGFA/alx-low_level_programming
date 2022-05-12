/**
 * init_dog - initialises the attributes of struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: name of dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;
	ptr = d;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
	
