#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type describing a dog.
 * @name: Pointer to string for dog's name
 * @age: Variable for dog's age
 * @owner: Pointer to string for owner's name
 *
 * Description: A struct for storing information about a dog,
 * including its name, age, and the name of its owner.
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
void free_dog(dog_t *d);





#endif /* DOG_H */
