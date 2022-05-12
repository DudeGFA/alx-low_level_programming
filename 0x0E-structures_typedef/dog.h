#ifndef _dog_h_
#define _dog_h_
/**
 * struct dog - name,age and owner of a dog as attributes
 * @name: name of the dog
 * @age: dog's age
 * @owner: name of dog's owner
 *
 * Description: describes a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* dog.h */
