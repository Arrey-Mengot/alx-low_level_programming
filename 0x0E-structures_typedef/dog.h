#ifndef _DOG_HEADER_
#define _DOG_HEADER_

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

/**
 * struct dog - dog structure to store dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
